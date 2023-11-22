#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

// Function to find the second largest element in the array
int findSecondLargest(const int arr[], int size) {
    if (size < 2) {
        cerr << "Error: Array size must be at least 2 to find the second largest element." << endl;
        return -1;  // Return an error value
    }

    int largest = arr[0];
    int secondLargest = arr[1];  // Initialize to the second element

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    // Input the size of the array
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Check for the correctness of the entered size
    if (size <= 0) {
        cerr << "Error: Array size must be greater than 0." << endl;
        return 1;
    }

    // Initialize the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    // Create and fill the array with random values
    int *arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;  // Generate a random number from 0 to 99
    }

    // Output the array to the screen
    cout << "The array is filled with random values: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Finding and outputting the second largest element
    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != -1) {
        cout << "The second largest element of the array: " << secondLargest << endl;
    }

    // Release the allocated memory for the array
    delete[] arr;

    return 0;
}
