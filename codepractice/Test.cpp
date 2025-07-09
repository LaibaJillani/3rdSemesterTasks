#include <iostream>
#include <string>
using namespace std;

class Employee {
	protected:
		int salary;
};

class Job : public Employee {
	public:
	int bonus;
	
	void setsalary(int s) {
		salary = s;
	}
	int getsalary() {
		return salary;
	}
};
	
	int main () {
		Job myJob;
		myJob.setsalary(50000);
		myJob.bonus = 15000;
		cout << "Salary = " << myJob.getsalary() << "\n";
		cout << "Bonus = " << myJob.bonus;
		return 0;
	} 
