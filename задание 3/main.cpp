#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num{};

    std::cout << "Введите целое число:" << std::endl;
    std::cin >> num;
    for (int counter{1}; counter <= 10; counter++)
    {
        std::cout << num << " " << "x " << counter << " " << "= " << (num * counter) << std::endl;
    }
    return EXIT_SUCCESS;
}
