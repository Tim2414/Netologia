#include <iostream>
#include <Windows.h>

long long int fibonacci(long long int num );

int main()
{
    SetConsoleOutputCP(1251);
    long long int num{};

    std::cout << "Введите число: ";
    std::cin >> num;
    std::cout << "Числа Фибоначчи:";
    
    for (int count{}; count < num; count++)
    {
        std::cout << " " << fibonacci(count);
    }

    return EXIT_SUCCESS;
}

long long int fibonacci(long long int num)
{
    long long int num1{0}, num2{1}, sum{};

    if (num == 0) { return 0; }
    if (num == 1) { return 1; }

    for (int count{}; count < num; count++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    return sum;
}

