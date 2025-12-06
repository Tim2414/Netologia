#include <iostream>
#include <Windows.h>

int** createTwoDimArray(int rows, int columns);
void fillTwoDimArray (int** array, int rows, int columns);
void printTwoDimArray (int** array, int rows, int columns);
void deleteArray(int**& array, int rows);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows{}, columns{};
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> columns;

    int** myTwoDimArray{ createTwoDimArray(rows, columns) };
    fillTwoDimArray (myTwoDimArray, rows, columns);
    printTwoDimArray (myTwoDimArray, rows, columns);
    deleteArray(myTwoDimArray, rows);
    std::cout << myTwoDimArray;
    return EXIT_SUCCESS;
}

int** createTwoDimArray(int rows, int columns)
{
    int** rowsArray { new int* [rows] {}};
    for (int row{}; row < rows; row++)
    {
        rowsArray[row] = new int[columns] {};
    }

    return rowsArray;
}

void fillTwoDimArray (int** array, int rows, int columns)
{
    for (int row{}; row < rows; row++)
    {
        for (int column{}; column < columns; column++)
        {
            array[row][column] = (row + 1) * (column + 1);
        }
    }
}

void printTwoDimArray (int** array, int rows, int columns)
{
    std::cout << "Таблица умножения: " << std::endl;

    for (int row{}; row < rows; row++)
    {
        for (int column{}; column < columns; column++)
        {
            std::cout << array[row][column] << "\t";
        }
        std::cout << std::endl;
    }
}

void deleteArray(int**& array, int rows)
{
    for (int row{}; row < rows; row++)
    {
        delete[] array[row];
    }
    delete[] array;
    array = nullptr;
}
