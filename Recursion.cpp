//A program of recursion where a function calls itself for getting the nth term in Fibonacci series
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1){ //when the nth term is at point 0 or 1 output will be 1
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1); //the nth term is sum of previous 2 terms in series
}
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The term in Fibonacci series at " << number << " is " << fibonacci(number) << "\n";
    return 0;
}