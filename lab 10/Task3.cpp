#include <iostream>
#include <cstdlib>  // Для функцій rand() і srand()
#include <ctime>    // Для функції time()

using namespace std;

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    if (size <= 0) {
        cerr << "Error: Array size must be greater than 0." << endl;
        return 1;
    }

    int arr[size];

    // Ініціалізація генератора випадкових чисел поточним часом
    srand(static_cast<unsigned>(time(0)));

    // Заповнення масиву випадковими значеннями
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;  // Генерація випадкового числа від 0 до 99
    }

    // Виведення масиву на екран
    cout << "An array filled with random values: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Знаходження індексів найбільшого і найменшого елементів
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Зміна місцями найбільшого і найменшого елементів
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // Виведення масиву після обміну
    cout << "Array after swapping the maximum and minimum elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
