#include <iostream>
#include <string.h>
#include <Windows.h>


int main(){

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str{};

    std::cout << "Введите слово: " << std::endl;
    std::getline(std::cin, str);
    std::cout << "Вы ввели: \n" << str;
    return EXIT_SUCCESS;
}
