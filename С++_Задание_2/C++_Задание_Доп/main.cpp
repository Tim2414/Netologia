#include <iostream>
#include <string.h>
#include <Windows.h>


int main(){

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str{};

    std::cout << "������� �����: " << std::endl;
    std::getline(std::cin, str);
    std::cout << "�� �����: \n" << str;
    return EXIT_SUCCESS;
}
