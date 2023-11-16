#include <iostream>

const int m1 = 4;
const int n1 = 3;

const int m2 = 6;
const int n2 = 4;

const int m3 = 5;
const int n3 = 7;

const int m4 = 4;
const int n4 = 6;

const int m5 = 3;
const int n5 = 4;

const int m6 = 4;
const int n6 = 7;

const int m15 = 3;
const int n15 = 3;


using namespace std;

// 1. Задати двомірний масив 𝑚 ∗ 𝑛 цілих чисел 𝑚 = 4, 𝑛 = 3. Визначити
// кількість парних чисел у кожному рядку.

void countEvenNumbersInRows(int array[m1][n1]) {
    for (int i = 0; i < m1; ++i) {
        int count = 0;
        for (int j = 0; j < n1; ++j) {
            if (array[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "In row " << (i + 1) << ", the number of even numbers is: " << count << endl;
    }
    cout << endl;
}

// 2. Задати двомірний масив 𝑚 ∗ 𝑛 цілих чисел 𝑚 = 6, 𝑛 = 4. Визначити
// кількість парних чисел у кожному стовпчику

void countEvenNumbersInColumns(int array[m2][n2]) {
    for (int j = 0; j < n2; ++j) {
        int count = 0;
        for (int i = 0; i < m2; ++i) {
            if (array[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "In column " << (j + 1) << ", the number of even numbers is: " << count << endl;
    }
    cout << endl;
}

// 3. Задати двомірний масив 𝑚 ∗ 𝑛 цілих чисел 𝑚 = 5, 𝑛 = 7. Обчислити
// суму елементів кожного рядка.

void calculateRowSum(int array[m3][n3]) {
    for (int i = 0; i < m3; ++i) {
        int sum = 0;
        for (int j = 0; j < n3; ++j) {
            sum += array[i][j];
        }
        cout << "The sum of elements in row " << (i + 1) << ": " << sum << endl;
    }
    cout << endl;
}

// 4. Задати двомірний масив 𝑚 ∗ 𝑛 цілих чисел 𝑚 = 4, 𝑛 = 6. Обчислити
// суму елементів кожного стовпчика.

void calculateColumnSum(int array[m4][n4]) {
    for (int j = 0; j < n4; ++j) {
        int sum = 0;
        for (int i = 0; i < m4; ++i) {
            sum += array[i][j];
        }
        cout << "The sum of elements in column " << (j + 1) << ": " << sum << endl;
    }
    cout << endl;
}

// 5. Задати двомірний масив 𝑚 ∗ 𝑛 цілих чисел 𝑚 = 3, 𝑛 = 4. Знайти
// максимальний елемент у масиві. Вивести на екран його значення та номер

void findMaxElement(int array[m5][n5]) {
    int maxElement = array[0][0];
    int maxI = 0;
    int maxJ = 0;

    for (int i = 0; i < m5; ++i) {
        for (int j = 0; j < n5; ++j) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << "The maximum element is: " << maxElement << " (row " << (maxI + 1) << ", column " << (maxJ + 1) << ")" << endl;
    cout << endl;
}

// 6. Задати двомірний масив 𝑚 ∗ 𝑛 цілих чисел 𝑚 = 4, 𝑛 = 7. Знайти
// мінімальний елемент у масиві. Вивести на екран його значення та номер у масиві.

void findMinElement(int array[m6][n6]) {
    int minElement = array[0][0];
    int minI = 0;
    int minJ = 0;

    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n1; ++j) {
            if (array[i][j] < minElement) {
                minElement = array[i][j];
                minI = i;
                minJ = j;
            }
        }
    }

    cout << "The minimum element is: " << minElement << " (row " << (minI + 1) << ", column " << (minJ + 1) << ")" << endl;
    cout << endl;
}

// 7. Задати двомірний масив 𝑚 ∗ 𝑛 цілих чисел 𝑚 = 4, 𝑛 = 7. Обчислити
// суму чисел по обидві діагоналі.

void calculateDiagonalSums(int array[m15][n15]) {
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < m6; ++i) {
        mainDiagonalSum += array[i][i];
        secondaryDiagonalSum += array[i][n15 - 1 - i];
    }

    cout << "The sum of numbers along the main diagonal is: " << mainDiagonalSum << endl;
    cout << "The sum of numbers along the secondary diagonal is: " << secondaryDiagonalSum << endl;
}

int main() {
    int array1[m1][n1] = {
        {2, 5, 8},
        {1, 7, 4},
        {6, 3, 9},
        {10, 12, 14}
    };

    int array2[m2][n2] = {
        {2, 5, 8, 10},
        {1, 7, 4, 6},
        {6, 3, 9, 12},
        {10, 12, 14, 16},
        {11, 15, 17, 19},
        {13, 18, 20, 22}
    };

    int array3[m3][n3] = {
        {2, 5, 8, 10, 12, 14, 16},
        {1, 7, 4, 6, 8, 10, 12},
        {6, 3, 9, 12, 15, 18, 21},
        {10, 12, 14, 16, 18, 20, 22},
        {11, 15, 17, 19, 21, 23, 25}
    };

    int array4[m4][n4] = {
        {2, 5, 8, 10, 12, 14},
        {1, 7, 4, 6, 8, 10},
        {6, 3, 9, 12, 15, 18},
        {10, 12, 14, 16, 18, 20}
    };

    int array5[m5][n5] = {
        {2, 5, 8, 10},
        {1, 7, 4, 6},
        {6, 3, 9, 12}
    };

    int array6[m6][n6] = {
        {2, 5, 8, 10, 12, 14, 16},
        {1, 7, 4, 6, 8, 10, 12},
        {6, 3, 9, 12, 15, 18, 21},
        {10, 12, 14, 16, 18, 20, 22}
    };
    
     int array15[m15][n15] = {
        {2, 5, 8 },
        {1, 7, 4 },
        {6, 3, 9 }
    };

    countEvenNumbersInRows(array1);
    countEvenNumbersInColumns(array2);
    calculateRowSum(array3);
    calculateColumnSum(array4);
    findMaxElement(array5);
    findMinElement(array6);
    calculateDiagonalSums(array15);

    return 0;
}
