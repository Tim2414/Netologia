#include <iostream>
#include <windows.h>
#include <string>

class Calculator
{
private:
    double var1{1};
    double var2{1};

public:
    Calculator(double setVar1 = 1, double setVar2 = 1) : var1{setVar1}, var2{setVar2}{}

    double add()
    {
        return var1 + var2;
    }

    double multiply()
    {
        return var1 * var2;
    }

    double subtract_1_2()
    {
        return var1 - var2;
    }

    double subtract_2_1()
    {
        return var2 - var1;
    }

    double divide_1_2()
    {
        return var1 / var2;
    }

    double divide_2_1()
    {
        return var2 / var1;
    }

    bool set_num1(double num1)
    {
        if(num1 == 0){return false;}
        var1 = num1;

        return true;
    }

    bool set_num2(double num2)
    {
        if(num2 == 0){return false;}
        var2 = num2;

        return true;
    }

    double getVar1(){return var1;}
    double getVar2(){return var2;}
};

void setVar1(Calculator& varSp);
void setVar2(Calculator& varSp);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Calculator version1{2, 2};
    std::string exitWay{" "};

    do
    {   setVar1(version1);
        setVar2(version1);

        std::cout << " num1 + num2 = " << version1.add() << std::endl;
        std::cout << " num1 * num2 = " << version1.multiply() << std::endl;
        std::cout << " num1 - num2 = " << version1.subtract_1_2() << std::endl;
        std::cout << " num2 - num1 = " << version1.subtract_2_1() << std::endl;
        std::cout << " num1 / num2 = " << version1.divide_1_2() << std::endl;
        std::cout << " num2 / num1 = " << version1.divide_2_1() << std::endl;

        std::cout << "Хотите продолжить? Варинаты: 'да' / 'нет': ";
        std::cin >> exitWay;

    } while(exitWay == "да");

    return EXIT_SUCCESS;
}

void setVar1(Calculator& varSp)
{
    double numSet{};
    bool boolBack{false};

    do
    {
        std::cout << "Введите num1: ";
        std::cin >> numSet;

        boolBack = varSp.set_num1(numSet);

        if (!boolBack)
        {
            std::cout << "Неверный ввод! Число не должно быть нулем. " << std::endl;
        }

    } while (!boolBack);
}

void setVar2(Calculator& varSp)
{
    double numSet{};
    bool boolBack{false};

    do
    {

        std::cout << "Введите num2: ";
        std::cin >> numSet;

        boolBack = varSp.set_num2(numSet);

        if (!boolBack)
        {
            std::cout << "Неверный ввод! Число не должно быть нулем. " << std::endl;
        }

    } while (!boolBack);
}
