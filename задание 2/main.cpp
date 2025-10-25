#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num{}, sumFigure{}, figure{};
    std::cout << "Введите целое число:" << std::endl;
    std::cin >> num;
    if (num < 0){num *= -1;}

    while (num != 0)
    {
        figure = num % 10;
        sumFigure += figure;
        num = num / 10;
    }
    std::cout << "Сумма цифр: " << sumFigure;
    return EXIT_SUCCESS;
}
