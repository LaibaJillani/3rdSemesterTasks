/*Write a program where the name of the Parlor is stored in data type string, the number of employees of a parlor is stored in data type int,
the salary of employees in data type double,the temperature of the parlor in data type float,
the greetings for customers in data type string, and the reviews of the parlor in data type char*/
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Name of Parlor: ";
    cin >> name;

    int employees;
    cout << "The number of employees we have: ";
    cin >> employees;

    double salary;
    cout << "Salary we offer to our team: ";
    cin >> salary;

    float temperature;
    cout << "In our Air Conditioned building the temperature we maintain for customers in Fahrenhite: ";
    cin >> temperature;

    string greetings;
    cout << "Greetings: ";
    cin.ignore(); //to discard the newline character so that newline from last cin doesn't get captured by getline
    getline(cin, greetings);

    char reviews;
    cout << "The ratings our parlor hold: ";
    cin >> reviews;

    cout << "Name: " << name << endl;
    cout << "Employees: " << employees << endl;
    cout << "Salary: " << salary << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Greetings: " << greetings << endl;
    cout << "Reviews: " << reviews << endl;

    return 0;
}