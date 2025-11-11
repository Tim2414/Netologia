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
    int numSwap;
    numSwap = num1;
    num1 = num2;
    num2 = numSwap;
}
