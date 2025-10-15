// A program to check if a number is prime or not by creating a Prime Check function and giving a pointer to it
#include <iostream>
using namespace std;

bool primeCheck(int *number) { // Function for checking if a number is prime or not
    int tempNumber = 2;

    while(tempNumber * tempNumber < *number) {
        if(*number % tempNumber == 0) {
            return false;
        }
        tempNumber++;
    }

    return true;
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int *pointer = &number; 

    if(primeCheck(pointer)){ // Calling primeCheck function
        cout << number << " is a prime number.";
    }
    else {
        cout << number << " is not a prime number.";
    }
    return 0;
}
