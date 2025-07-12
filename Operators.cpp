//A program for all kinds of Operators of C++ and their functionning with examples,the functionality of each operand defined in comments
#include <iostream>
using namespace std;

int main (){
    //Arithmetic Operators(Used to perform operations on variables)
    cout << "Arithmetic Operators:" << endl;
    int number1 = 8 , number2 = 5;
    cout << "Integer 1 = " << number1 << endl
         << "Integer 2 = " << number2 << endl;
    cout << "The sum of given two integers is: " << number1 + number2 << endl; //performs addition

    cout << "The difference of given two integers is: " << number1 - number2 << endl; //performs subtraction

    cout << "The multiplication of given two integers is: " << number1 * number2 << endl; //performs multiplication

    cout << "The division of given two integers is: " << number1 / number2 << endl; //performs division

    cout << "The modulus of given two integers is: " << number1 % number2 << endl; //modulus(returns the division remainder)

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
    cout << (number1 > number2 && number1 >= number2) << endl; // outputs 1 if both are true
    //logical OR
    cout << (number1 > number2 || number1 < number2) << endl; // outputs 1 if anyone is true
    //logical NOT
    cout << (~number1 > number2) << endl << endl; // reverse the output
    
    /*Assignment Operators(Used to assign values to variables)
    Assignmnet operator works and value is assigned to the variable at left*/
    cout << "Assignment Operators:" << endl;
    int number3 = 10; // equal to operator
    int number4 = 5;
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
    int number5 = 26, number6 = 13;
    cout << "Integer 5 = " << number5 << endl
         << "Integer 6 = " << number6 << endl;

    cout << "Result of Bitwise AND: " << (number5 & number6) << endl;

    cout << "Result of Bitwise OR: " << (number5 | number6) << endl;

    cout << "Result of Bitwise XOR: " << (number5 ^ number6) << endl;

    cout << "Bitwise NOT of Integer 5: " << (~number5) << endl;
    return 0;
}