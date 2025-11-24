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
    int arrayReverse[size];
    int counterRevers{0};

    for(int counter{}; counter < size; counter++)
    {
        arrayReverse[counter] = array[counter];
    }

    for(int counter{size-1}; counter >= 0; counter--)
    {
        array[counterRevers] = arrayReverse[counter];
        ++counterRevers;
    }
}

