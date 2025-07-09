#include <iostream>
using namespace std;

/*int increment(int a){
    a++;
    return a;
}

int main () {
    int a=2;
    increment(a);
    cout << a;
    return 0;
}*/

int increment(int &a){
    a++;
    return a;
}

int main () {
    int a = 2; 
    increment(a);   // Pass by reference
    cout << a;
    return 0;
}