#include <iostream>
#include <Windows.h>
#include <string.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool flagNegativeNum1 {0}, flagNegativeNum2 {0};
    int num1{}, num2{};
    int leftPartNum1{}, rightPartNum1{};
    int leftPartNum2{}, rightPartNum2{};
    std::string equal = "равно ";
    std::string less = "меньше чем ";
    std::string outputLeftPartNum1{}, outputRightPartNum1{};
    std::string outputLeftPartNum2{}, outputRightPartNum2{};

    std::cout << "Программа работает с числами в диапозоне [-99; 99] " << std::endl;
    std::cout << "Введите целое число: ";
    std::cin >> num1;
    std::cout << "Введите целое число: ";
    std::cin >> num2;

    if ((num1 < -99 || num1 > 99) || (num2 < -99 || num2 > 99))
    {
        std::cout << "\n" << "Ошибка! Одно из чисел вне диапазона!";
        exit(0);
    }

    if (num1 < 0)
    {
        num1 *= -1;
        flagNegativeNum1 = 1;
    }
    if (num2 < 0)
    {
        num2 *= -1;
        flagNegativeNum2 = 1;
    }

    leftPartNum1 = num1 / 10;
    rightPartNum1 = num1 % 10;
    leftPartNum2 = num2 / 10;
    rightPartNum2 = num2 % 10;

    if (leftPartNum1 == 1)
    {
        switch (rightPartNum1)
        {
        case 0: outputRightPartNum1 = "десять ";
        break;
        case 1: outputRightPartNum1 = "одиннадцать ";
        break;
        case 2: outputRightPartNum1 = "двенадцать ";
        break;
        case 3: outputRightPartNum1 = "тринадцать ";
        break;
        case 4: outputRightPartNum1 = "четырнадцать ";
        break;
        case 5: outputRightPartNum1 = "пятнадцать ";
        break;
        case 6: outputRightPartNum1 = "шестнадцать ";
        break;
        case 7: outputRightPartNum1 = "семнадцать ";
        break;
        case 8: outputRightPartNum1 = "восемнадцать ";
        break;
        case 9: outputRightPartNum1 = "девятнадцать ";
        break;
        }
    }
    else if (leftPartNum1 > 1)
    {
        switch (leftPartNum1)
        {
        case 2: outputLeftPartNum1 = "двадцать ";
        break;
        case 3: outputLeftPartNum1 = "тридцать ";
        break;
        case 4: outputLeftPartNum1 = "сорок ";
        break;
        case 5: outputLeftPartNum1 = "пятьдесят ";
        break;
        case 6: outputLeftPartNum1 = "шестьдесят ";
        break;
        case 7: outputLeftPartNum1 = "семьдесят ";
        break;
        case 8: outputLeftPartNum1 = "восемьдесят ";
        break;
        case 9: outputLeftPartNum1 = "девяносто ";
        break;
        default: std::cout << "Ошибка";
        }
        switch (rightPartNum1)
        {
        case 1: outputRightPartNum1 = "один ";
        break;
        case 2: outputRightPartNum1 = "два ";
        break;
        case 3: outputRightPartNum1 = "три ";
        break;
        case 4: outputRightPartNum1 = "четыре ";
        break;
        case 5: outputRightPartNum1 = "пять ";
        break;
        case 6: outputRightPartNum1 = "шесть ";
        break;
        case 7: outputRightPartNum1 = "семь ";
        break;
        case 8: outputRightPartNum1 = "восемь ";
        break;
        case 9: outputRightPartNum1 = "девять ";
        break;
        }
    }
    else if (leftPartNum1 == 0 && rightPartNum1 != 0)
    {
        switch (rightPartNum1)
        {
        case 1: outputRightPartNum1 = "один ";
        break;
        case 2: outputRightPartNum1 = "два ";
        break;
        case 3: outputRightPartNum1 = "три ";
        break;
        case 4: outputRightPartNum1 = "четыре ";
        break;
        case 5: outputRightPartNum1 = "пять ";
        break;
        case 6: outputRightPartNum1 = "шесть ";
        break;
        case 7: outputRightPartNum1 = "семь ";
        break;
        case 8: outputRightPartNum1 = "восемь ";
        break;
        case 9: outputRightPartNum1 = "девять ";
        break;
        }
    }
    else if (leftPartNum1 == 0 && rightPartNum1 == 0)
    {
    outputRightPartNum1 = "ноль ";
    }

    if (leftPartNum2 == 1)
    {
        switch (rightPartNum2)
        {
        case 0: outputRightPartNum2 = "десять ";
        break;
        case 1: outputRightPartNum2 = "одиннадцать ";
        break;
        case 2: outputRightPartNum2 = "двенадцать ";
        break;
        case 3: outputRightPartNum2 = "тринадцать ";
        break;
        case 4: outputRightPartNum2 = "четырнадцать ";
        break;
        case 5: outputRightPartNum2 = "пятнадцать ";
        break;
        case 6: outputRightPartNum2 = "шестнадцать ";
        break;
        case 7: outputRightPartNum2 = "семнадцать ";
        break;
        case 8: outputRightPartNum2 = "восемнадцать ";
        break;
        case 9: outputRightPartNum2 = "девятнадцать ";
        break;
        }
    }
    else if (leftPartNum2 > 1)
    {
        switch (leftPartNum2)
        {
        case 2: outputLeftPartNum2 = "двадцать ";
        break;
        case 3: outputLeftPartNum2 = "тридцать ";
        break;
        case 4: outputLeftPartNum2 = "сорок ";
        break;
        case 5: outputLeftPartNum2 = "пятьдесят ";
        break;
        case 6: outputLeftPartNum2 = "шестьдесят ";
        break;
        case 7: outputLeftPartNum2 = "семьдесят ";
        break;
        case 8: outputLeftPartNum2 = "восемьдесят ";
        break;
        case 9: outputLeftPartNum2 = "девяносто ";
        break;
        }
        switch (rightPartNum2)
        {
        case 1: outputRightPartNum2 = "один ";
        break;
        case 2: outputRightPartNum2 = "два ";
        break;
        case 3: outputRightPartNum2 = "три ";
        break;
        case 4: outputRightPartNum2 = "четыре ";
        break;
        case 5: outputRightPartNum2 = "пять ";
        break;
        case 6: outputRightPartNum2 = "шесть ";
        break;
        case 7: outputRightPartNum2 = "семь ";
        break;
        case 8: outputRightPartNum2 = "восемь ";
        break;
        case 9: outputRightPartNum2 = "девять ";
        break;
        }
    }
    else if (leftPartNum2 == 0 && rightPartNum2 != 0)
    {
        switch (rightPartNum2)
        {
        case 1: outputRightPartNum2 = "один ";
        break;
        case 2: outputRightPartNum2 = "два ";
        break;
        case 3: outputRightPartNum2 = "три ";
        break;
        case 4: outputRightPartNum2 = "четыре ";
        break;
        case 5: outputRightPartNum2 = "пять ";
        break;
        case 6: outputRightPartNum2 = "шесть ";
        break;
        case 7: outputRightPartNum2 = "семь ";
        break;
        case 8: outputRightPartNum2 = "восемь ";
        break;
        case 9: outputRightPartNum2 = "девять ";
        break;
        }
    }
    else if (leftPartNum2 == 0 && rightPartNum2 == 0)
    {
    outputRightPartNum2 = "ноль ";
    }

    if (flagNegativeNum1 == 0 && flagNegativeNum2 == 0)
    {
        if (num1 == num2)
        {
            std::cout << "\n" << outputLeftPartNum1 << outputRightPartNum1 << equal << outputLeftPartNum2 << outputRightPartNum2;
        }
        else if (num1 < num2)
        {
            std::cout << "\n" << outputLeftPartNum1 << outputRightPartNum1 << less << outputLeftPartNum2 << outputRightPartNum2;
        }
        else if (num1 > num2)
        {
            std::cout << "\n" << outputLeftPartNum2 << outputRightPartNum2 << less << outputLeftPartNum1 << outputRightPartNum1;
        }
    }
    else if (flagNegativeNum1 != 0 && flagNegativeNum2 != 0)
    {
        if (num1 == num2)
        {
            std::cout << "\n" << "минус " << outputLeftPartNum1 << outputRightPartNum1 << equal << "минус " << outputLeftPartNum2 << outputRightPartNum2;
        }
        else if (num1 < num2)
        {
            std::cout << "\n" << "минус " << outputLeftPartNum2 << outputRightPartNum2 << less << "минус " << outputLeftPartNum1 << outputRightPartNum1;
        }
        else if (num1 > num2)
        {
            std::cout << "\n" << "минус " << outputLeftPartNum1 << outputRightPartNum1 << less << "минус " << outputLeftPartNum2 << outputRightPartNum2;
        }
    }
    else if ((flagNegativeNum1 == 0 && flagNegativeNum2 != 0) || (flagNegativeNum1 != 0 && flagNegativeNum2 == 0))
    {
        if (flagNegativeNum2 != 0)
        {
            std::cout << "\n" << "минус " << outputLeftPartNum2 << outputRightPartNum2 << less << outputLeftPartNum1 << outputRightPartNum1;
        }
        else if (flagNegativeNum1 != 0)
        {
            std::cout << "\n" << "минус " << outputLeftPartNum1 << outputRightPartNum1 << less << outputLeftPartNum2 << outputRightPartNum2;
        }
    }
    return EXIT_SUCCESS;
}
