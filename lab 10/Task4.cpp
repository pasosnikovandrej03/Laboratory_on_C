#include <iostream>
#include <cstdlib>  // Для функцій rand() і srand()
#include <ctime>    // Для функції time()

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cerr << "Error: The size of the array must be greater than 0." << endl;
        return 1;
    }

    // Ініціалізація генератора випадкових чисел поточним часом
    srand(static_cast<unsigned>(time(0)));

    // Створення та заповнення масиву випадковими значеннями
    int *arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;  
    }

    // Виведення масиву на екран
    cout << "Масив заповнений випадковими значеннями: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int A;
    cout << "Enter the number A: ";
    cin >> A;

    // Рахуємо кількість елементів у масиві, більших за A
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > A) {
            count++;
        }
    }

    // Виведення результату
    cout << "Number of elements in the array greater than A: " << count << endl;

    // Звільнення виділеної пам'яті для масиву
    delete[] arr;

    return 0;
}
