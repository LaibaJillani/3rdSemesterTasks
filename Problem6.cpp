// A program to find length of a string without length function
#include <iostream>
using namespace std;

int strLength(char *str){ // A function to find the length of string
    int length = 0;
    while(*str != '\0') { // Loops through the string until it is not null, \0 denotes null or string end
        ++length;
        ++str;
    }
    return length;
}

int main(){
    char message[100];
    cout << "Enter a message: ";
    cin.getline(message , 100); // Taking input from user including spaces
    cout << message << endl;

    int length = strLength(message); // Calling function to get length
    cout << "The length of given string is: " << length << endl; // Display length of string
    return 0;
}
