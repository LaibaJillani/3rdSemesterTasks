// A program for sorting a given array
#include <iostream>
using namespace std;

void bubbleSort(int array[]) { // A function created for sorting an array using bubble sort
    const int size = 10;
    for (int initial = 0; initial < size; initial++)
    {
        for (int index = 1; index < size - initial; index++) {
            if (array[index] < array[index - 1]) {
                int tempNum = array[index];
                array[index] = array[index - 1];
                array[index - 1] = tempNum;
            }
        }
    }
}

int main() {
    const int size = 10;
    int array[size];

    cout << "Enter " << size << " Numbers: " << endl;
    cout << "The numbers should be 0 , 1 and 2 only!" << endl;
    // Taking input from user
    for (int index = 0; index < size; ++index) {
        cin >> array[index];
        if (array[index] != 0 && array[index] != 1 && array[index] != 2) {
            // Condition that input should be 0,1 and 2 only
            cout << "Invalid input! Please enter 0,1 ans 2." << endl;
            break;
        }
        cout << array[index] << " ";
    }

    bubbleSort(array); // Calling bubbleSort function
    cout << "\nSorted Array: ";
    for (int index = 0; index < size; ++index) 
    {
        cout << array[index] << " "; // Display of sorted array
    }
}
