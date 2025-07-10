#include <iostream>
using namespace std;

int Fibonacci(int n){
    if (n==0) {
        return 1;
    }
    return Fibonacci(n - 2) + Fibonacci(n - 1);
}

int main () {
    int a;
    cin >> a;
    cout << "The number at " << a << " in Fibonacci series is: " << Fibonacci(a);
    return 0;
}
