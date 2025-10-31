#include <iostream>

int main()
{
    int const size{10};
    int arr[size]{228, 52, 42, 7, 8, 666, 11, 9, 999, 10};

    for (int element{}; element < size; element++)
    {
        std::cout << arr[element];
        if (element == size - 1){continue;}
        std::cout << ", ";
    }
    return EXIT_SUCCESS;
}
