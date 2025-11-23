#include <iostream>

void print(int* array, int size);

int main()
{
    int size1{10}, size2{5}, size3{7};
    int firstArray[size1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int secondArray[size2] = {1, 2, 3, 4, 5};
    int thirdArray[size3] = {1, 2, 3, 4, 5, 6, 7};

    print(firstArray, size1);
    print(secondArray, size2);
    print(thirdArray, size3);
    return EXIT_SUCCESS;
}

void print(int* array, int size)
{
    for(int counter{0}; counter < size; ++counter)
    {
        std::cout << array[counter] << " ";
    }
    std::cout << std::endl;
}
