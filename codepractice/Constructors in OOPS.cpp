#include <iostream>
using namespace std;

class Car {
	public:
		string brand;
		string model;
		int year;
		Car(string x, string y, int z) {
		brand = x;
		model = y;
		year = z;
	}
};

int main () {
	Car myObj("BMW","X5",1990);
	cout << myObj.brand << " " << myObj.model << " " << myObj.year;
	return 0;
}
