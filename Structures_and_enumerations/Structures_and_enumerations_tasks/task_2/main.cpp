#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>

struct bankAccount
{
    long long accountNumber{};
    std::string name{};
    long double balance{};

    bankAccount(long long acc = 0, std::string name = " ", long double bal = 0) :  accountNumber{acc}, name{name}, balance{bal}{}

    void makeAccount()
    {
        std::cout << "Введите номер счёта: ";
        std::cin >> accountNumber;
        std::cout << "Введите имя владельца: ";
        std::cin >> name;
        std::cout << "Введите баланс: ";
        std::cin >> balance;
    }

    void changeBalance()
    {
        std::cout << "Введите новый баланс: ";
        std::cin >> balance;
    }

    void outputAccountData()
    {
        std::cout << "Ваш счёт: " << name << ", " << accountNumber << ", "<< std::fixed << std::setprecision(3) << balance << std::endl;
    }
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bankAccount user1{};

    user1.makeAccount();
    user1.changeBalance();
    user1.outputAccountData();

    return EXIT_SUCCESS;
}
