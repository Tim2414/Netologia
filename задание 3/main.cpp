#include <iostream>
#include <Windows.h>

int fibonacciLite(int num );

int main()
{
    SetConsoleOutputCP(1251);
    int num{};

    std::cout << "Введите число: ";
    std::cin >> num;
    std::cout << "Числа Фибоначчи:";
    
    for (int count{}; count < num; count++)
    {
        std::cout << " " << fibonacciLite(count);
    }
    return EXIT_SUCCESS;
}

int fibonacciLite(int num)
{
    if (num == 0) { return 0; }
    if (num == 1) { return 1; }

    return fibonacciLite(num - 1) + fibonacciLite(num - 2);
}

