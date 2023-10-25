#include <iostream>

int main() {
    int constellationCode;

    std::cout << "Enter the numerical code of a constellation (1-7): ";
    std::cin >> constellationCode;

    switch (constellationCode) {
        case 1:
            std::cout << "Constellation name: Orion (Оріон)" << std::endl;
            std::cout << "Number of stars in the constellation: 10" << std::endl;
            break;
        case 2:
            std::cout << "Constellation name: Ursa Major (Больша Ведмедиця)" << std::endl;
            std::cout << "Number of stars in the constellation: 15" << std::endl;
            break;
        case 3:
            std::cout << "Constellation name: Leo (Лев)" << std::endl;
            std::cout << "Number of stars in the constellation: 20" << std::endl;
            break;
        case 4:
            std::cout << "Constellation Name: Scorpio (Скорпіон)" << std::endl;
            std::cout << "Number of stars in the constellation: 12" << std::endl;
            break;
        case 5:
            std::cout << "Constellation name: Cassiopeia (Кассіопея)" << std::endl;
            std::cout << "Number of stars in the constellation: 18" << std::endl;
            break;
        case 6:
            std::cout << "Constellation name: Cygnus (Лебідь)" << std::endl;
            std::cout << "Number of stars in the constellation: 14" << std::endl;
            break;
        case 7:
            std::cout << "Constellation name: Pegasus (Пегас)" << std::endl;
            std::cout << "Number of stars in the constellation: 22" << std::endl;
            break;
        default:
            std::cout << "Constellation with this numerical code was not found." << std::endl;
    }

    return 0;
}
