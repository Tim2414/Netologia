#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int var1{}, var2{}, var3{};

    std::cout << "������� ������ �����: ";
    std::cin >> var1;
    std::cout << "������� ������ �����: ";
    std::cin >> var2;
    std::cout << "������� ������ �����: ";
    std::cin >> var3;

    int pos1
    {
        ((var1 >= var2) && (var1 >= var3)) ? var1
        : ((var2 >= var1) && (var2 >= var3)) ? var2
        : var3
    };
    int pos2
    {
        ((var1 >= var2) && (var1 <= var3)) ? var1
        : ((var1 >= var3) && (var1 <= var2)) ? var1
        : ((var2 >= var1) && (var2 <= var3)) ? var2
        : ((var2 >= var3) && (var2 <= var1)) ? var2
        : var3
    };
     int pos3
    {
        ((var1 <= var2) && (var1 <= var3)) ? var1
        : ((var2 <= var1) && (var2 <= var3)) ? var2
        : var3
    };

    std::cout << "\n" << "���������: " << pos1 << " " << pos2 << " " << pos3;
    return EXIT_SUCCESS;
}
