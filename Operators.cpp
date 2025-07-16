//A program for all kinds of Operators of C++ and their functionning with examples,the functionality of each operand defined in comments
#include <iostream>
using namespace std;

int main (){
    //Arithmetic Operators(Used to perform operations on variables)
    cout << "Arithmetic Operators:" << endl;
    int number1;
    cin >> number1;
    int number2;
    cin >> number2;

    cout << "Integer 1 = " << number1 << endl
         << "Integer 2 = " << number2 << endl;

    int sum = number1 + number2; //performs addition
    cout << "The sum of given two integers is: " << sum << endl;

    int subtraction = number1 - number2; //performs subtraction
    cout << "The difference of given two integers is: " << subtraction << endl;

    int multiplication = number1 * number2; //performs multiplication
    cout << "The multiplication of given two integers is: " << multiplication << endl;

    double division = number1 / number2; //performs division
    cout << "The division of given two integers is: " << division << endl;

    int modulus = number1 % number2; //modulus(returns the division remainder)
    cout << "The modulus of given two integers is: " << modulus << endl;

    cout << "Increment of Integer 1: " << ++number1 << endl; //increases the value by 1

    cout << "Decrement of Integer 2: " << --number2 << endl << endl; // decreases the value by 1

    //Comparison Operators(Compare two variables or more and output is in boolean form)
    cout << "Comparison Operators:" << endl;
    bool result = (number1 == number2);
    cout << "Weather given integers are equal or not: " << result << endl;

    bool result2 = (number1 < number2);
    cout << "Weather given integer 1 is smaller than 2 or not: " << result2 << endl;

    bool result3 = (number1 > number2);
    cout << "Weather given integer 1 is greater than 2 or not: " << result3 << endl;

    bool result4 = (number1 >= number2);
    cout << "Weather given integer 1 is greater than equal to 2 or not: " << result4 << endl;

    bool result5 = (number1 <= number2);
    cout << "Weather given integer 1 is smaller than equal to 2 or not: " << result5 << endl;

    bool result6 = (number1 != number2);
    cout << "Weather given integer 1 is not equal to integer 2: " << result6 << endl << endl;

    //Logical Operators(Outputs in boolean form after checking conditions)
    cout << "Logical Operators:" << endl;
    //logical AND
    bool result7 = (number1 > number2 && number1 >= number2); // outputs 1 if both are true
    cout << result7 << endl;
    //logical OR
    bool result8 = (number1 > number2 || number1 < number2); // outputs 1 if anyone is true
    cout << result8 << endl;
    //logical NOT
    bool result9 = (~number1 > number2); // reverse the output
    cout << result9 << endl << endl;
    
    /*Assignment Operators(Used to assign values to variables)
    Assignmnet operator works and value is assigned to the variable at left*/
    cout << "Assignment Operators:" << endl;
    int number3;
    cin >> number3;
    int number4;
    cin >> number4;

    cout << "Integer 3 = " << number3 << endl 
         << "Integer 4 = " << number4 << endl;

    number3 += number4; // number3 = number3 + number4
    cout << "Result of Addition assignment: " << number3 << endl;
    cout << "Updated Integer 3 = " << number3 << endl;

    number3 -= number4; // number3 = number3 - number4
    cout << "Result of Subtraction assignment: " << number3 << endl;
    cout << "Updated Integer 3 = " << number3 << endl;
    
    number3 *= number4; // number3 = number3 * number4
    cout << "Result of Multiplication assignment: " << number3 << endl;
    cout << "Updated Integer 3 = " << number3 << endl;
    
    number3 /= number4; // number3 = number3 / number4
    cout << "Result of Division assignment: " << number3 << endl;
    cout << "Updated Integer 3 = " << number3 << endl;

    number3 %= number4; // number3 = number3 % number4
    cout << "Result of Modulus assignment: " << number3 << endl;
    cout << "Updated Integer 3 = " << number3 << endl;

    number3 <<= 1; // The bitwise equivalent of given number is shifted left by 1(bit shifting)
    cout << "Left Shift of Integer 3 = " << number3 << endl;

    number4 >>= 1; // The bitwise equivalent of given number is shifted right by 1(bit shifting)
    cout << "Right Shift of Integer 4 = " << number4 << endl << endl;

    //Bitwise Operators(perform bit operations)
    cout << "Bitwise Operators:" << endl;
    int number5;
    cin >> number5;
    int number6;
    cin >> number6;

    cout << "Integer 5 = " << number5 << endl
         << "Integer 6 = " << number6 << endl;
         
    int bitAND = (number5 & number6);
    cout << "Result of Bitwise AND: " << bitAND << endl;

    int bitOR = (number5 | number6);
    cout << "Result of Bitwise OR: " << bitOR << endl;

    int bitXOR = (number5 ^ number6);
    cout << "Result of Bitwise XOR: " << bitXOR << endl;

    int bitNOT = (~number5);
    cout << "Bitwise NOT of Integer 5: " << bitNOT << endl;

    return 0;
}