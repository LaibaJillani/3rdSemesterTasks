//  A program for creating a basic registeration panel for a new user

#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

class essentials { // A class created for essentials of registeration and taking input from the user
    private:
    string username;
    string email;
    int pin;

    public:
    
    void setusername(){
        cout << "Enter a valid username: " << endl;
        getline(cin, username);
    }
    string getusername() const{ // const keyword for making the information constant for each specific user
        return username;
    }

    void setemail() {
        cout << "Enter a valid email address: " << endl;
        getline(cin, email);

    // Bsic validation for email that it contains @ or .
        while (email.find('@') == string::npos || email.find('.') == string::npos ) {
            cout << "Invalid Email!" << endl;
            cout << "Try Again: ";
            getline(cin, email);
        }
    }
    string getemail() const{ 
        return email;
    }

    void setpin(){
        cout << "Enter a valid pin for your account (only numeric digits 4 or 6 digit long): " << endl;

        while (!(cin >> pin)) { // The pin should be numeric only
            cout << "Invalid input. Please enter numeric digits only: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore(); // clear the newline after cin
        cout << endl;
    }
    int getpin() const{
        return pin;
    }

};

int main () {
    essentials myobj;
    myobj.setusername();
    myobj.setemail();
    myobj.setpin();

    cout << "Your Username is: " << myobj.getusername() << endl;
    cout << "Your Registered Email Address is: " << myobj.getemail() << endl;
    cout << "Your pin is for this account is: " << myobj.getpin() << endl;

    ofstream file("Saving Information.txt", ios::app); // saving the registeration of user for future use
    file << myobj.getusername() << endl << myobj.getemail() << endl << myobj.getpin() << endl;
    file.close();

    return 0;
}