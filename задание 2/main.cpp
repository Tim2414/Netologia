#include <iostream>
#include <Windows.h>

namespace math
{
    namespace summation
    {
        int calc(int x, int y)
        {
            return x + y;
        }
    }

    namespace subtraction
    {
        int calc(int x, int y)
        {
            return x - y;
        }
    }

    namespace multiplication
    {
        int calc(int x, int y)
        {
            return x * y;
        }
    }

    namespace division
    {
        int calc(int x, int y)
        {
            return x / y;
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x{6}, y{9};
    std::cout << "x = " << x << ", " <<"y = "<< y << std::endl;
    std::cout << "Сложение: " << math::summation::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << math::subtraction::calc(x, y) << std::endl;
    std::cout << "Умножение: " << math::multiplication::calc(x, y) << std::endl;
    std::cout << "Деление: " << math::division::calc(x, y) << std::endl;

    return EXIT_SUCCESS;
}
