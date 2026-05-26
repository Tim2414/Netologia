#include <iostream>
#include <Windows.h>
#include <string>

void outputMonths(int var);

enum Months{ January, February, March, April, May, June,
    July, August, September, October, November, December};

int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int varMonths{};

    std::cout << "Чтобы узнать месяц, введите его номер: от 1 до 12" << std::endl;
    std::cout << "Чтобы выйти, введите нуль" << std::endl;

    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> varMonths;

        if(varMonths == 0)
        {
            std::cout << "До свидания" << std::endl;

            break;
        }
        else
        {
            outputMonths(varMonths);
        }

    } while(varMonths != 0);

    return EXIT_SUCCESS;
}

void outputMonths(int var)
{
    switch (var - 1)
    {
    case Months::January:
        std::cout << "Январь" << std::endl;
        break;
    case Months::February:
        std::cout << "Февраль" << std::endl;
        break;
    case Months::March:
        std::cout << "Март" << std::endl;
        break;
    case Months::April:
        std::cout << "Апрель" << std::endl;
        break;
    case Months::May:
        std::cout << "Май" << std::endl;
        break;
    case Months::June:
        std::cout << "Июнь" << std::endl;
        break;
    case Months::July:
        std::cout << "Июль" << std::endl;
        break;
    case Months::August:
        std::cout << "Август" << std::endl;
        break;
    case Months::September:
        std::cout << "Сентябрь" << std::endl;
        break;
    case Months::October:
        std::cout << "Октябрь" << std::endl;
        break;
    case Months::November:
        std::cout << "Ноябрь" << std::endl;
        break;
    case Months::December:
        std::cout << "Декабрь" << std::endl;
        break;
    default:
        std::cout << "Неправильный номер!" << std::endl;
        break;
    }
}
