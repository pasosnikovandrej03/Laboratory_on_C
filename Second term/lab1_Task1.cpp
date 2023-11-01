#include <iostream>

using namespace std;

int main() {
    int m[] = {12, 5, 8, 2, 10, 6, 4, 1, 9, 3, 7, 11};
    int n = sizeof(m) / sizeof(m[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (m[j] > m[j + 1]) {
                int temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }

    cout << "Array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << m[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (m[j] < m[j + 1]) {
                int temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }

    cout << "Array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << m[i] << " ";
    }
    cout << endl;

    return 0;
}
