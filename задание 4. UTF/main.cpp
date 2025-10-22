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
    std::string equal = "����� ";
    std::string less = "������ ��� ";
    std::string outputLeftPartNum1{}, outputRightPartNum1{};
    std::string outputLeftPartNum2{}, outputRightPartNum2{};

    std::cout << "��������� �������� � ������� � ��������� [-99; 99] " << std::endl;
    std::cout << "������� ����� �����: ";
    std::cin >> num1;
    std::cout << "������� ����� �����: ";
    std::cin >> num2;

    if ((num1 < -99 || num1 > 99) || (num2 < -99 || num2 > 99))
    {
        std::cout << "\n" << "������! ���� �� ����� ��� ���������!";
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
        case 0: outputRightPartNum1 = "������ ";
        break;
        case 1: outputRightPartNum1 = "����������� ";
        break;
        case 2: outputRightPartNum1 = "���������� ";
        break;
        case 3: outputRightPartNum1 = "���������� ";
        break;
        case 4: outputRightPartNum1 = "������������ ";
        break;
        case 5: outputRightPartNum1 = "���������� ";
        break;
        case 6: outputRightPartNum1 = "����������� ";
        break;
        case 7: outputRightPartNum1 = "���������� ";
        break;
        case 8: outputRightPartNum1 = "������������ ";
        break;
        case 9: outputRightPartNum1 = "������������ ";
        break;
        }
    }
    else if (leftPartNum1 > 1)
    {
        switch (leftPartNum1)
        {
        case 2: outputLeftPartNum1 = "�������� ";
        break;
        case 3: outputLeftPartNum1 = "�������� ";
        break;
        case 4: outputLeftPartNum1 = "����� ";
        break;
        case 5: outputLeftPartNum1 = "��������� ";
        break;
        case 6: outputLeftPartNum1 = "���������� ";
        break;
        case 7: outputLeftPartNum1 = "��������� ";
        break;
        case 8: outputLeftPartNum1 = "����������� ";
        break;
        case 9: outputLeftPartNum1 = "��������� ";
        break;
        default: std::cout << "������";
        }
        switch (rightPartNum1)
        {
        case 1: outputRightPartNum1 = "���� ";
        break;
        case 2: outputRightPartNum1 = "��� ";
        break;
        case 3: outputRightPartNum1 = "��� ";
        break;
        case 4: outputRightPartNum1 = "������ ";
        break;
        case 5: outputRightPartNum1 = "���� ";
        break;
        case 6: outputRightPartNum1 = "����� ";
        break;
        case 7: outputRightPartNum1 = "���� ";
        break;
        case 8: outputRightPartNum1 = "������ ";
        break;
        case 9: outputRightPartNum1 = "������ ";
        break;
        }
    }
    else if (leftPartNum1 == 0 && rightPartNum1 != 0)
    {
        switch (rightPartNum1)
        {
        case 1: outputRightPartNum1 = "���� ";
        break;
        case 2: outputRightPartNum1 = "��� ";
        break;
        case 3: outputRightPartNum1 = "��� ";
        break;
        case 4: outputRightPartNum1 = "������ ";
        break;
        case 5: outputRightPartNum1 = "���� ";
        break;
        case 6: outputRightPartNum1 = "����� ";
        break;
        case 7: outputRightPartNum1 = "���� ";
        break;
        case 8: outputRightPartNum1 = "������ ";
        break;
        case 9: outputRightPartNum1 = "������ ";
        break;
        }
    }
    else if (leftPartNum1 == 0 && rightPartNum1 == 0)
    {
    outputRightPartNum1 = "���� ";
    }

    if (leftPartNum2 == 1)
    {
        switch (rightPartNum2)
        {
        case 0: outputRightPartNum2 = "������ ";
        break;
        case 1: outputRightPartNum2 = "����������� ";
        break;
        case 2: outputRightPartNum2 = "���������� ";
        break;
        case 3: outputRightPartNum2 = "���������� ";
        break;
        case 4: outputRightPartNum2 = "������������ ";
        break;
        case 5: outputRightPartNum2 = "���������� ";
        break;
        case 6: outputRightPartNum2 = "����������� ";
        break;
        case 7: outputRightPartNum2 = "���������� ";
        break;
        case 8: outputRightPartNum2 = "������������ ";
        break;
        case 9: outputRightPartNum2 = "������������ ";
        break;
        }
    }
    else if (leftPartNum2 > 1)
    {
        switch (leftPartNum2)
        {
        case 2: outputLeftPartNum2 = "�������� ";
        break;
        case 3: outputLeftPartNum2 = "�������� ";
        break;
        case 4: outputLeftPartNum2 = "����� ";
        break;
        case 5: outputLeftPartNum2 = "��������� ";
        break;
        case 6: outputLeftPartNum2 = "���������� ";
        break;
        case 7: outputLeftPartNum2 = "��������� ";
        break;
        case 8: outputLeftPartNum2 = "����������� ";
        break;
        case 9: outputLeftPartNum2 = "��������� ";
        break;
        }
        switch (rightPartNum2)
        {
        case 1: outputRightPartNum2 = "���� ";
        break;
        case 2: outputRightPartNum2 = "��� ";
        break;
        case 3: outputRightPartNum2 = "��� ";
        break;
        case 4: outputRightPartNum2 = "������ ";
        break;
        case 5: outputRightPartNum2 = "���� ";
        break;
        case 6: outputRightPartNum2 = "����� ";
        break;
        case 7: outputRightPartNum2 = "���� ";
        break;
        case 8: outputRightPartNum2 = "������ ";
        break;
        case 9: outputRightPartNum2 = "������ ";
        break;
        }
    }
    else if (leftPartNum2 == 0 && rightPartNum2 != 0)
    {
        switch (rightPartNum2)
        {
        case 1: outputRightPartNum2 = "���� ";
        break;
        case 2: outputRightPartNum2 = "��� ";
        break;
        case 3: outputRightPartNum2 = "��� ";
        break;
        case 4: outputRightPartNum2 = "������ ";
        break;
        case 5: outputRightPartNum2 = "���� ";
        break;
        case 6: outputRightPartNum2 = "����� ";
        break;
        case 7: outputRightPartNum2 = "���� ";
        break;
        case 8: outputRightPartNum2 = "������ ";
        break;
        case 9: outputRightPartNum2 = "������ ";
        break;
        }
    }
    else if (leftPartNum2 == 0 && rightPartNum2 == 0)
    {
    outputRightPartNum2 = "���� ";
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
            std::cout << "\n" << "����� " << outputLeftPartNum1 << outputRightPartNum1 << equal << "����� " << outputLeftPartNum2 << outputRightPartNum2;
        }
        else if (num1 < num2)
        {
            std::cout << "\n" << "����� " << outputLeftPartNum2 << outputRightPartNum2 << less << "����� " << outputLeftPartNum1 << outputRightPartNum1;
        }
        else if (num1 > num2)
        {
            std::cout << "\n" << "����� " << outputLeftPartNum1 << outputRightPartNum1 << less << "����� " << outputLeftPartNum2 << outputRightPartNum2;
        }
    }
    else if ((flagNegativeNum1 == 0 && flagNegativeNum2 != 0) || (flagNegativeNum1 != 0 && flagNegativeNum2 == 0))
    {
        if (flagNegativeNum2 != 0)
        {
            std::cout << "\n" << "����� " << outputLeftPartNum2 << outputRightPartNum2 << less << outputLeftPartNum1 << outputRightPartNum1;
        }
        else if (flagNegativeNum1 != 0)
        {
            std::cout << "\n" << "����� " << outputLeftPartNum1 << outputRightPartNum1 << less << outputLeftPartNum2 << outputRightPartNum2;
        }
    }
    return EXIT_SUCCESS;
}
