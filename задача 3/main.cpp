#include <iostream>
#include <Windows.h>
void reverse(int* array, int size);

int main()
{
    SetConsoleOutputCP(1251);

    int const size{10};
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "До функции reverse: ";
    for(int counter{}; counter < size; counter++)
    {
        std::cout << array[counter] << " ";
    }
    std::cout << std::endl;

    reverse(array, size);
    std::cout << "После функции reverse: ";
    for(int counter{}; counter < size; counter++)
    {
        std::cout << array[counter] << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}

void reverse(int* array, int size)
{

    for(int counter{}; counter < size/2; counter++)
    {
        int rev = array[counter];
        array[counter] = array[size - counter - 1];
        array[size - counter - 1] = rev;
    }

}

