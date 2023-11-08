

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "The size of the array should be greater than 0." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = -1;
    for (int i = 0; i < n; i++) {
        if (maxIndex == -1 || arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Modified array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
