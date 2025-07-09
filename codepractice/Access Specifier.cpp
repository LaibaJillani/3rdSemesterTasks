#include <iostream>
using namespace std;

class Job {
	protected:
		int salary;
};
class Programmer: protected Job {
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
	Programmer myProgram;
	myProgram.setsalary(50000);
	myProgram.bonus =15000;
	cout << "Salary = " << myProgram.getsalary() << "\n";
	cout << "Bonus = " << myProgram.bonus;
	return 0;
}