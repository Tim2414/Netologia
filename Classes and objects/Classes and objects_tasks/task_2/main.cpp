#include <iostream>
#include <windows.h>
#include <string>

class Counter
{
private:
    int count{1};

public:
    Counter() = default;

    Counter(int setCounter) : count{setCounter} {}

    void counterPlus()
    {
        count++;
    }

    void counterMinus()
    {
        count--;
    }

    int getCounter() const
    {
        return count;
    }
};

void counterCommand(const std::string& command, Counter& counter);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string startWay{};
    std::string command{};

    Counter version1; 

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";

    while (true)
    {
        std::cin >> startWay;

        if (startWay == "да")
        {
            int size{};
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> size;

            version1 = Counter(size);
            break;
        }
        else if (startWay == "нет")
        {
            break;
        }
        else
        {
            std::cout << "Вы ввели неверное слово! Введите да или нет: ";
        }
    }

    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        counterCommand(command, version1);

    } while (command != "x" && command != "х");

    std::cout << "До свидания!" << std::endl;

    return EXIT_SUCCESS;
}

void counterCommand(const std::string& command, Counter& counter)
{
    if (command == "+")
    {
        counter.counterPlus();
    }
    else if (command == "-")
    {
        counter.counterMinus();
    }
    else if (command == "=")
    {
        std::cout << counter.getCounter() << std::endl;
    }
}
