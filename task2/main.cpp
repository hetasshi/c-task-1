#include <iostream>
int main() {
    const float PI = 3.14159; // значение числа пи
    float L, R, S;
    std::cout << "Введите длину окружности L: ";
    std::cin >> L;
    R = L / (2 * PI);
    S = PI * R * R;
    std::cout << "Площадь круга S: " << S << std::endl;
}
