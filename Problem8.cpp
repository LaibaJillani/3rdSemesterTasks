// A program for pointer assignment, double pointers, and memory referencing
#include <iostream>
using namespace std;

int main(){
    int firstvalue, secondvalue;
    int *p1, *p2;   // pointer declarations
    int **p3, **p4; // double pointer declarations

    p1 = &firstvalue;  // STEP 1: p1 points to firstvalue
    p2 = &secondvalue; // STEP 2: p2 points to secondvalue

    p3 = &p1; // p3 points to p1
    p4 = &p2; // p4 points to p2

    *p1 = 10;  // firstvalue = 10
    *p2 = *p1; // secondvalue = 10

    p1 = p2;                // STEP 3: THIS is where p1 stops pointing to firstvalue
    // p1 now points to secondvalue instead

    *p3 = *p4;              // p1 = p2 again (via double pointers) – no change

    *p1 = 20;               // secondvalue = 20
    
    cout << "First value: " << firstvalue << " " << "Second value: " << secondvalue; // print firstvalue, secondvalue

    return 0;
}
