#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int choice;
    string email;
    string fname;
    string password;
    do{
        cout << "1. Login" << "\n";
        cout << "2. Sign up" << "\n";
        cout << "3. Cancel" << "\n";
        cin >> choice;
        cin.ignore();
        if (choice == 1){
            cout << "Enter your email: " << "\n";
            getline(cin, email);
            break;
        } else if (choice == 2) {
            cout << "Enter your Account Name: " << fname << "\n";
            getline(cin, fname) ;
            cout << "Enter your password: " << password << "\n";
            getline(cin, password);
            break;
        }
    } while (choice != 3);
    return 0;
}