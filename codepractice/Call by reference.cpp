#include <iostream>
using namespace std;

void increment(int *a) {
	(*a)++;
}

int main () {
	int a = 2;
	int* ptr = &a;
	increment(&a);
	cout << a ;
	return 0;
}