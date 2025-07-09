#include <iostream>
using namespace std;

class myClass {
	public:
		string brand;
		string model;
		int year;
};

int main () {
	myClass myObj;
	myObj.brand = "Volvo";
	myObj.model = "Brandy";
	myObj.year = 1979;
	
	cout << myObj.brand << "\n";
	cout << myObj.model << "\n";
	cout << myObj.year << "\n";
	
	return 0;
}