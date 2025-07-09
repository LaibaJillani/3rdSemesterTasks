#include <iostream>
using namespace std;

class Vehicle {
	public:
		string brand = "Ford";
		void honk() {
			cout << "Tuut Tuut!" << "\n";
		}
};
class Car: public Vehicle {
	public: 
	string model = "Mustang";
};
int main () {
	Car myCar;
	myCar.honk();
	cout << myCar.brand << " " << myCar.model;
	return 0;
}
