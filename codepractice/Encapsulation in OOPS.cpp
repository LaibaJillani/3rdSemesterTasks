#include <iostream>
using namespace std;

class Salary {
	private:
		int salary;
		public:
			void setSalary(int s) {
			salary = s;
		}
			
			int getSalary() {
				return salary ;
			}
};

int main ( ) {
	Salary myobj;
	myobj.setSalary(50000);
	cout << myobj.getSalary();
	return 0;
}
