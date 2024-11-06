#include <iostream>

int main() {
    int totseconds;
    int hours, minutes, seconds;

    std::cout << "Введите количество секунд: ";
    std::cin >> totseconds;

    hours = totseconds / 3600;
    minutes = (totseconds % 3600) / 60;
    seconds = totseconds % 60;

    std::cout << "Часы: " << hours << ", Минуты: " << minutes << ", Секунды: " << seconds << std::endl;

}
