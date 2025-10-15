// A program for defining the functionality of pointers and displaying output with help of pointers
#include <iostream>
using namespace std;

int main(){
    int integer = 25;
    int *pointer1 = &integer;
    int **pointer2 = &pointer1;

    cout << "Displaying with 3 methods: " << endl;
    cout << "Integer is: " << integer << endl;
    cout << *pointer1 << endl; // Display with single pointer
    cout << **pointer2 << endl; // Display with double pointer
    return 0;
}
