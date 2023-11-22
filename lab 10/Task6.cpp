#include <iostream>
#include <cstdlib>  // Для функцій rand() і srand()
#include <ctime>    // Для функції time()

using namespace std;

int main() {
    // Ініціалізація генератора випадкових чисел поточним часом
    srand(static_cast<unsigned>(time(0)));

    // Задання розміру масиву
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Перевірка коректності введеного розміру
    if (size <= 0) {
        cerr << "Error: Array size must be greater than 0." << endl;
        return 1;
    }

    // Створення та заповнення масиву рандомними значеннями 0 та 1
    int *arr = new int[size];
    cout << "Generated array: ";
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 2;  // Генерація випадкового числа 0 або 1
        cout << arr[i] << " ";
    }
    cout << endl;

    // Пошук номера першого нульового елемента
    int firstZeroIndex = -1;  // Ініціалізація індексу як -1, щоб вказати, що нульових елементів поки немає
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            firstZeroIndex = i;
            break;  // Зупинка пошуку, якщо знайдено перший нульовий елемент
        }
    }

    // Виведення результату
    if (firstZeroIndex != -1) {
        cout << "The index of the first zero element is: " << firstZeroIndex << endl;
    } else {
        cout << "The array does not contain any zero elements." << endl;
    }

    // Звільнення виділеної пам'яті для масиву
    delete[] arr;

    return 0;
}
