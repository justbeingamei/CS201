//NAME: Amei Ayuel
//PROGRAM: PGM2
//DATE: Due 9/1/2021
//DESCRIPTION: 


#include <iostream>

using namespace std;

int main() {
    int arr[4];  // array to store 4 numbers
    int sum = 0; // variable to store the sum of numbers
    char continueLoop = 'y';

    while (continueLoop == 'y' || continueLoop == 'Y') {
        // reset the sum for each iteration
        sum = 0;

        // Input 4 numbers from the user
        cout << "Enter 4 values:\n";
        for (int i = 0; i < 4; ++i) // initiaties for loop, starts i at 0. Loop will continue as long as i is less than 4/ ++i is to increment value
         // by 1 after each loop iteration
            {
            cin >> arr[i]; // adding the numbers directly into the array!!!
            sum += arr[i]; // this is the sum of all the numbers in the array 
        }

        // Basic bubble sort to sort the array in ascending order
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3 - i; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Swap the elements manually- go look at how to do it automatically!!!
                    arr[j] = arr[j] + arr[j + 1];
                    arr[j + 1] = arr[j] - arr[j + 1];
                    arr[j] = arr[j] - arr[j + 1];
                }
            }
        }

        // Output the results with expanded logic
        cout << "Array in Ascending Order: ";
        cout << arr[0] << " ";
        cout << arr[1] << " ";
        cout << arr[2] << " ";
        cout << arr[3] << endl;

        cout << "Array in Descending Order: ";
        cout << arr[3] << " ";
        cout << arr[2] << " ";
        cout << arr[1] << " ";
        cout << arr[0] << endl;

        // Finding the smallest number manually
        int smallest = arr[0];
        if (arr[1] < smallest) {
            smallest = arr[1];
        }
        if (arr[2] < smallest) {
            smallest = arr[2];
        }
        if (arr[3] < smallest) {
            smallest = arr[3];
        }
        cout << "The smallest number is: " << smallest << endl;

        // Finding the largest number manually
        int largest = arr[0];
        if (arr[1] > largest) {
            largest = arr[1];
        }
        if (arr[2] > largest) {
            largest = arr[2];
        }
        if (arr[3] > largest) {
            largest = arr[3];
        }
        cout << "The largest number is: " << largest << endl;

        // Calculating the average using more detailed steps
        double average = sum / 4.0;
        cout << "The average is: " << average << endl;

        // Ask the user if they want to continue
        cout << "Do you want to enter another set of numbers? (y/n): ";
        cin >> continueLoop;
    }

    return 0;
}

