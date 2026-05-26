#include <iostream>
#include <windows.h>
#include <string>

struct Adress
{
    std::string city{};
    std::string street{};
    int houseNumber{};
    int flatNumber{};
    long index{};
};

void outputAdress(const Adress& adress);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Adress user1{"Москва", "Арбат", 12, 8, 123456};
    Adress user2{"Ижевск", "Пушкина", 59, 143, 953769};

    outputAdress(user1);
    std::cout << std::endl;
    outputAdress(user2);

    return EXIT_SUCCESS;
}

void outputAdress(const Adress& adress)
{
    std::cout << "Город: " << adress.city << std::endl;
    std::cout << "Улица: " << adress.street << std::endl;
    std::cout << "Номер дома: " << adress.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << adress.flatNumber << std::endl;
    std::cout << "Индекс: " << adress.index << std::endl;
}
