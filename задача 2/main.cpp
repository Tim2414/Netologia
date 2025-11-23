#include <iostream>

void swap(int* num1, int* num2);

int main()
{
    int num1{8}, num2{2};
    int* pNum1{ &num1 };
    int* pNum2{ &num2 };

    std::cout << "a = " << num1 << ", " << "b = " << num2 <<std::endl;
    swap(pNum1, pNum2);
    std::cout << "a = " << num1 << ", " << "b = " << num2 << std::endl;
    return EXIT_SUCCESS;
}

void swap(int* num1, int* num2)
{
    int numSwap;

    numSwap = *num2;
    *num2 = *num1;
    *num1 = numSwap;
}
