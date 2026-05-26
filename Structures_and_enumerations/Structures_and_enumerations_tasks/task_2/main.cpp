#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>

struct bankAccount
{
    long long accountNumber{};
    std::string name{};
    long double balance{};
};

void changeBalance(bankAccount& account, long double newBalance);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bankAccount user1{};

    std::cout << "Введите номер счёта: ";
    std::cin >> user1.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin >> user1.name;

    std::cout << "Введите баланс: ";
    std::cin >> user1.balance;

    long double newBalance{};
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    changeBalance(user1, newBalance);

    std::cout << "Ваш счёт: "
              << user1.name << ", "
              << user1.accountNumber << ", "
              << std::fixed << std::setprecision(3)
              << user1.balance << std::endl;

    return EXIT_SUCCESS;
}

void changeBalance(bankAccount& account, long double newBalance)
{
    account.balance = newBalance;
}
