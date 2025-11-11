#include <iostream>

void swap(int& num1, int& num2);

int main()
{
    int a{1}, b{2};

    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return EXIT_SUCCESS;
}

void swap(int& num1, int& num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}
//На самом деле способ подсмотрел, так как думал, думал и не придумал.
//Минус достаточно очевиден - переполнение (то есть когда сумма/разница выходит за рамки максимального значения, которое может хранить тот или иной тип).
