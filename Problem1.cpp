// A program to find the integer with maximum occurance in an array taken by user
#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int array[size];

    cout << "Enter " << size << " numbers: ";
    // Taking input from user
    for (int index = 0 ; index < size; index++) {
        cin >> array[index];
    }

    int mostFrequent = array[0]; // element with highest frequency
    int maxCount = 1; // frequency count

    for (int firstNum = 0 ; firstNum < size; firstNum++) {
        int count = 1; // count occurrences of arr[first]
        for (int secondNum = firstNum + 1; secondNum < size; secondNum++) {
            if (array[firstNum] == array[secondNum]) {
                count++;
            }
        }

        // update most frequent element if there exist any
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = array[firstNum];
        }
    }

    cout << "\nMost occurring element: " << mostFrequent << endl; // Displaying most occuring element
    cout << "It appears " << maxCount << " times." << endl;

    return 0;
}
