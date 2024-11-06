#include <iostream>

int main() {
    double v, t, a, S;

    std::cout << "Введите начальную скорость v: ";
    std::cin >> v;
    std::cout << "Введите время движения t: ";
    std::cin >> t;
    std::cout << "Введите ускорение a: ";
    std::cin >> a;

    S = v * t + (a * t * t) / 2;

    std::cout << "Пройденное расстояние S: " << S << std::endl;

}
