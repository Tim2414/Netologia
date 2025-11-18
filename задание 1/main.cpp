#include <iostream>
#include <windows.h>

void counting_function();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }

    return EXIT_SUCCESS;
}

void counting_function()
{
    static int variable {};
    std::cout << "Количество вызовов функции counting_function(): " << ++variable << std::endl;
}
