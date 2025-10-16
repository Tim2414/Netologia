#include <iostream>
#include <string.h>
#include <Windows.h>


int main(){

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num{};

    std::cout << "Введите число: " << std::endl;
    std::cin >> num;
    std::cout << "Вы ввели: \n" << num;
    return EXIT_SUCCESS;
}
