#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    do{
        cout << "Your age is: " << age << "\n";
        if (age < 18){
            cout << "You aren't eligible to vote!";
        }
    } while (age >=18 );
    cout << "You are eligible to vote!";
    return 0;
}