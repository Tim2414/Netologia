#include <iostream>
#include <windows.h>
#include <string>

class Counter
{
private:
    int count{1};

public:
    Counter(int setCounter = 1) : count{setCounter}{}

    void counterPlus(){ count++; }
    void counterMinus(){ count--; }
    int getCounter(){ return count; }
};

void counterComand(std::string str, Counter& varCounter);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string startWay{" "};
    std::string exitWay{" "};
    int size{1};

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";

    do
    {
        std::cin >> startWay;

        if(startWay == "да")
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> size;
        }
        else if(startWay == "нет"){ break; }
        else
        {
            std::cout << "Вы ввели неверное слово! Введите верное: ";
        }

    } while(startWay != "да");

    Counter version1{size};

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> exitWay;
        counterComand(exitWay, version1);

    } while(exitWay != "х" && exitWay != "x");

    std::cout << "До свидания!" << std::endl;

    return EXIT_SUCCESS;
}

void counterComand(std::string str, Counter& varCounter)
{
    if (str == "+"){ varCounter.counterPlus(); }
    else if (str == "-"){ varCounter.counterMinus(); }
    else if (str == "="){ std::cout << varCounter.getCounter() << std::endl; }
    else{ return; }
}
