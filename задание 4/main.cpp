#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);

    int flagStop{0};
    int const size{10};
    int arr[size]{10, 1, 4, 3 , 2, 66, 100, 77, 88 , 1000};

    std::cout << "Массив до сортировки: ";
    for (int element : arr)
    {
        std::cout << element << " ";
    }

    for (int element{}; element < size; element++)
    {
        flagStop = 0;
        for (int elementBub{size - 1}; elementBub > element; elementBub--)
        {
            if (arr[elementBub] < arr[elementBub - 1])
            {
                int numSwap = arr[elementBub];
                arr[elementBub] = arr[elementBub - 1];
                arr[elementBub - 1] = numSwap;
                flagStop = 1;
            }
        }
        if (flagStop == 0){break;}
    }

    std::cout << "\n" << "Массив после сортировки: ";
    for (int element : arr)
    {
        std::cout << element << " ";
    }

    return EXIT_SUCCESS;
}
