#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size{1};
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    int* myArray{ new int[size] {} };

    for(int element{}; element < size; element++)
    {
        std::cout << "myArray[" << element << "] = ";
        std::cin >> myArray[element];
    }

    std::cout << "Введённый массив: ";
    for(int element{}; element < size; element++)
    {
        std::cout << myArray[element] << " ";
    }
    delete[] myArray;
    return EXIT_SUCCESS;
}
