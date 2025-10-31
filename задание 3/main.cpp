#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);

    int const lines{3}, columns{6};
    int arr[lines][columns]
    {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 20, 11, 12},
        {13, 14, -1, 16, 17, 18}
    };
    int minNum = arr[0][0], maxNum = arr[0][0];
    int indexLineMin{}, indexColumnMin{}, indexLineMax{}, indexColumnMax{};

    std::cout << "Массив: " << std::endl;
    for (int line{}; line < lines; line++)
    {
        for (int column{}; column < columns; column++)
        {
            std::cout << arr[line][column] << "\t" ;

            if (minNum > arr[line][column])
            {
                minNum = arr[line][column];
                indexLineMin = line;
                indexColumnMin = column;
            }
            if (maxNum < arr[line][column])
            {
                maxNum = arr[line][column];
                indexLineMax = line;
                indexColumnMax = column;
            }
        }
        std::cout << "\n";
    }

    std::cout << "Индекс минимального элемента: " << indexLineMin << " " << indexColumnMin << std::endl;
    std::cout << "Индекс минимального элемента: " << indexLineMax << " " << indexColumnMax << std::endl;

    return EXIT_SUCCESS;
}
