//Ввести числовий код сузір’я і вивести його назву та кількість зірок в
//ньому
#include <iostream>

int main() {
    int constellationCode;

    // Запитуємо користувача ввести числовий код сузір'я (від 1 до 7)
    std::cout << "Введіть числовий код сузір'я (1-7): ";
    std::cin >> constellationCode;

    // Використовуємо оператор switch для визначення назви сузір'я та кількості зірок
    switch (constellationCode) {
        case 1:
            std::cout << "Назва сузір'я: Сузір'я 1" << std::endl;
            std::cout << "Кількість зірок в сузір'ї: 10" << std::endl;
            break;
        case 2:
            std::cout << "Назва сузір'я: Сузір'я 2" << std.endl;
            std.cout << "Кількість зірок в сузір'ї: 15" << std::endl;
            break;
        case 3:
            std::cout << "Назва сузір'я: Сузір'я 3" << std::endl;
            std::cout << "Кількість зірок в сузір'ї: 20" << std::endl;
            break;
        case 4:
            std::cout << "Назва сузір'я: Сузір'я 4" << std::endl;
            std::cout << "Кількість зірок в сузір'ї: 12" << std::endl;
            break;
        case 5:
            std::cout << "Назва сузір'я: Сузір'я 5" << std::endl;
            std::cout << "Кількість зірок в сузір'ї: 18" << std::endl;
            break;
        case 6:
            std::cout << "Назва сузір'я: Сузір'я 6" << std::endl;
            std::cout << "Кількість зірок в сузір'ї: 14" << std::endl;
            break;
        case 7:
            std::cout << "Назва сузір'я: Сузір'я 7" << std::endl;
            std::cout << "Кількість зірок в сузір'ї: 22" << std::endl;
            break;
        default:
            std::cout << "Сузір'я з таким числовим кодом не знайдено." << std::endl;
    }

    return 0;
}
