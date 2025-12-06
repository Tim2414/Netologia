#include <iostream>
#include <Windows.h>

double* createArray(int size);
void deleteArray(double* array);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size{};
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    double* myArray{ createArray(size) };

    std::cout << "Массив: ";
    for(int element{}; element < size; element++)
    {
        std::cout << myArray[element] << " ";
    }
    deleteArray(myArray);

    return EXIT_SUCCESS;
}

double* createArray(int size)
{
    return new double[size] {};
}

void deleteArray(double* array)
{
    delete[] array;
}
