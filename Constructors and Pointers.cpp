/* A program for deep and shallow copy constructors with pointers concept, where we have taken a book store as example where
information of books has been saved using constructors and methods*/
#include <iostream>
using namespace std;

class Book {
    public:
        string name;
        string* authorptr;
        int numberofpages;
        char* sectionptr; // Pointer for storing section in char type

        Book(string name, string author, int numberofpages, char section){ // Parameterized Constructors
            this->name = name;
            authorptr = new string;
            *authorptr = author;
            this->numberofpages = numberofpages;
            sectionptr = new char; // assigning a memory location in heap 
            *sectionptr = section;
        }

        Book (Book &orignialBook) { // Custom copy constructor
             this->name = orignialBook.name;
             authorptr = new string;
            *authorptr = *orignialBook.authorptr;
            this->numberofpages = orignialBook.numberofpages;
            sectionptr = new char;
            *sectionptr = *orignialBook.sectionptr;
        } 

        void getInformation(){
            cout << "Name of Book: " << name << endl;
            cout << "Name of author: " << *authorptr << endl;
            cout << "Number of pages of Book: " << numberofpages << endl;
            cout << "Section in which book lies: " << *sectionptr << endl;
        }

        //destructor 
        ~Book(){
            delete authorptr;
            delete sectionptr;
        }

};

int main() {
    Book myBook1("Programming", "William", 175, 'A');
    myBook1.getInformation();

    Book myBook2(myBook1);
    *(myBook2.sectionptr) = 'B'; // Changing section of Book2 
    *(myBook2.authorptr) = "James"; // Changing author of Book2
    myBook2.getInformation();

     myBook1.getInformation(); // Print info of Book1 again and Check if it also changes section and author of Book1 it'll not 
     return 0;
}