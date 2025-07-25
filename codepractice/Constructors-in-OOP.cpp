// Concept of Constructors in C++
#include <iostream>
using namespace std;

class Car {
	public:
	// Attributes of the Class Car
		string brand; 
		string model;
		int year;
		/* Constructor are special method invoked automatically at the time of object creation
		It has the same name as the Class*/
		Car(string brand, string model, int year) { // Making of Constructor(parameterized constructor)
		this->brand = brand; // this pointer is used to access object attribute
		this->model = model;
		this->year = year;
	}

	Car(Car &originalCar) { //pass by reference
		this->brand = originalCar.brand; 
		this->model = originalCar.model;
		this->year = originalCar.year;
	}

	void getInformation(){
		cout << "Brand Name:" << brand << endl;
		cout << "Model Name:" << model << endl;
		cout << "Year:" << year << endl;
	}
};

int main () {
	Car myObj("BMW","X5",1990); // Calling function
	myObj.getInformation();

	Car myObj2(myObj); // custom Copy constructor called
	myObj.getInformation();

	return 0;
}