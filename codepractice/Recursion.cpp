#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The term in Fibonacci series at " << a << " is " << fib(a) << "\n";
    return 0;
}