#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //bool flagEnd{0};
    int const size{10};
    int arr[size]{2, 1, 45, 46, 67, -1, 89, 90, 106, 102};
    int minNum{arr[0]}, maxNum{arr[0]};

    std::cout << "Массив: ";
    for (int element{}; element < size; element++)
    {
        std::cout << arr[element] << " ";
    }

    for (int elementMinMax{}; elementMinMax < size; elementMinMax++)
    {
       if ( minNum > arr[elementMinMax])
       {
        minNum = arr[elementMinMax];
       }

       if ( maxNum < arr[elementMinMax])
       {
        maxNum = arr[elementMinMax];
       }
    }

    std::cout << "\n" << "Минимальный элемент: " << minNum;
    std::cout << "\n" << "Максимальный элемент: " << maxNum;
    return EXIT_SUCCESS;
}
