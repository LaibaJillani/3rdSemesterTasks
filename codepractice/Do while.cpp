#include <iostream>
using namespace std;

int main(){
    int pin;
    const int correctpin = 5643;
    do{
        cout << "Enter your pin: ";
        cin >> pin;
    } while (pin != 5643);
    cout << "Access Granted";
    return 0;
}