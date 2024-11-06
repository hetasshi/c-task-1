#include <iostream>

int main() {
    float R1, R2, R3, R0;

    std::cout << "Введите сопротивление R1: ";
    std::cin >> R1;
    std::cout << "Введите сопротивление R2: ";
    std::cin >> R2;
    std::cout << "Введите сопротивление R3: ";
    std::cin >> R3;

    if (R1 != 0 && R2 != 0 && R3 != 0) {
        
        R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

        std::cout << "Общее сопротивление R0: " << R0 << std::endl;
    }
    
    else {
        std::cout << "Сопротивления не должны быть равны нулю." << std::endl;
    }

}
