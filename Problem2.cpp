// A program for Search and Replace
#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int array[size];

    cout << "Enter " << size << " Numbers: " << endl;
    //Taking input from user
    for (int index = 0; index < size; ++index) {
        cin >> array[index];
    }

    int oldValue; // The integer we want to replace
    cout << "\nChoose a integer from given numbers to replace: " ;
    cin >> oldValue;

    int newValue; // Updated value of integer to be replaced
    cout << "\nChoose a new integer to replace the choosen integer: ";
    cin >> newValue;

    int count = 0;
    for (int number = 0; number < size; ++number) {
        if (array[number] == oldValue) {
            // If oldvalue find in the array at any index replace it
            array[number] = newValue;
        }
        count++;
    }
    if (count == 0){
         cout << "This integer doesn't exist in Array.";
    }
    else 
            {
                cout << "Updated array." << endl;
                for (int index = 0; index < size; ++index) 
    {
        cout << array[index] << " "; // Display of updated array
    }
            }

            return 0;
}
