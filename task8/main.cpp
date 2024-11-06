#include <iostream>

int main() {
    double deposit, annual_interest_rate, monthly_payment;

    std::cout << "Введите сумму денежного вклада в евро: ";
    std::cin >> deposit;

    std::cout << "Введите процент годовых: ";
    std::cin >> annual_interest_rate;

    double monthly_interest_rate = annual_interest_rate / 12 / 100;

    monthly_payment = deposit * monthly_interest_rate;

    std::cout << "Ежемесячная выплата: " << monthly_payment << " евро" << std::endl;

}
