#include <iostream>
using namespace std;

int main (){
	int choice;
	do {
		cout << "Menu: " << "\n";
		cout << "1. Study" << "\n";
		cout << "2. Play" << "\n";
		cout << "3. Sleep" << "\n";
		cout << "4. Quit!" << "\n";
		cin >> choice;
	} while (choice != 4);
	return 0;
}