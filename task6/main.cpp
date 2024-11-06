#include <iostream>

int main() {
    int totaldays;

    std::cout << "Введите количество дней: ";
    std::cin >> totaldays;

    int weeks = totaldays / 7; // polnye nedely
    int days = totaldays % 7; // dni

    std::cout << weeks << " неделя и " << days << " день" << std::endl;

}
