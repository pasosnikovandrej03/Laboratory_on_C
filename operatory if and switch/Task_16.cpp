#include <iostream>

int main() {
    int apartmentNumber;

    // Запитуємо користувача ввести номер квартири
    std::cout << "Enter apartment number: ";
    std::cin >> apartmentNumber;

    // Використовуємо оператор if або if-else для визначення кількості кімнат і жителів
    if (apartmentNumber == 101) {
        std::cout << "apartment " << apartmentNumber << " There are 3 rooms and 4 inhabitants." << std::endl;
    } else if (apartmentNumber == 102) {
        std::cout << "apartment " << apartmentNumber << "There are 2 rooms and 2 inhabitants." << std::endl;
    } else if (apartmentNumber == 103) {
        std::cout << "apartment " << apartmentNumber << "There are 4 rooms and 5 inhabitants." << std::endl;
    } else {
        std::cout << "There is no information about the number of rooms and residents for the apartment" << apartmentNumber << "." << std::endl;
    }

    return 0;
}
