#include <iostream>
#include <cmath>

int main() {
    float distance, time_in_seconds, minutes, seconds, speed_kmh;
    
    std::cout << "Вычисление скорости бега." << std::endl;
    std::cout << "Введите длину дистанции (метры) = ";
    std::cin >> distance;

    // min.sec 
    std::cout << "Введите время (минуты.секунды) = ";
    std::cin >> minutes;
    
    // cattim min.sec
    seconds = (minutes - static_cast<int>(minutes)) * 100; 
    minutes = static_cast<int>(minutes);

    time_in_seconds = minutes * 60 + seconds;

    float speed_mps = distance / time_in_seconds;

    speed_kmh = speed_mps * 3.6;

    speed_kmh = round(speed_kmh * 100) / 100;

    std::cout << "Дистанция: " << distance << " м" << std::endl;
    std::cout << "Время: " << minutes << " мин " << static_cast<int>(seconds) << " сек = " << time_in_seconds << " секунд" << std::endl;
    std::cout << "Вы бегали со скоростью " << speed_kmh << " км/ч" << std::endl;

}
