#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // по фатку способов несколько: через цикл while с флагом, без флага (главное инициализировать num не 0) и через do while
    int sumNum{}, num{};
    do
    {
        std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
        std::cin >> num;
        sumNum += num;
    } while (num != 0);

    std::cout << "Сумма: " << sumNum;
    return EXIT_SUCCESS;
}
