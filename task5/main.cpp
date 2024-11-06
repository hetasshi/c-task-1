#include <iostream>
#include <cmath> // round()

int main() {
    double amount;
    
    std::cout << "сумму в долларах (типо 12.5): ";
    std::cin >> amount;

    int dollars = static_cast<int>(amount);

    // центы, умножаем на 100 и округляем до ближайшего целого
    int cents = static_cast<int>(round((amount - dollars) * 100));

    std::cout << dollars << " долларов и " << cents << " центов" << std::endl;

}
