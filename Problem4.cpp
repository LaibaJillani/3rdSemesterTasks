// A program to swap 2 numbers and display updated numbers
#include <iostream>
using namespace std;

void swap(int *number1, int *number2) { // A function created for swapping numbers
    int *tempNum = number1;
    number1 = number2;
    number2 = tempNum;
}

int main(){
    int integer1;
    int integer2;
    cout << "Enter two numbers: " << endl;
    cin >> integer1;
    cin >> integer2;

    cout << "Before swapping: " << endl;
    cout << "Integer 1 = " << integer1 << endl;
    cout << "Integer 2 = " << integer2 << endl;

    swap(integer1, integer2); // Calling function for swap

    cout << "After swapping: " << endl;
    cout << "Integer 1 = " << integer1 << endl;
    cout << "Integer 2 = " << integer2 << endl;
    return 0;
}
