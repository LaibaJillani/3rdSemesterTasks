#include <iostream>
using namespace std;

int sum(int a, int b, int c){
    return a + b + c;
}

int main(){
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    int num3;
    cin >> num3;
    cout << "The sum is: " << sum(num1, num2, num3) << "\n";
    return 0;
}