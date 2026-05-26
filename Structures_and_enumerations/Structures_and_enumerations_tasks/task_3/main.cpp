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

    Adress( std::string city = " ", std::string street = " ", int houseNum = 0, int flatNum = 0, long index = 0) :
    city{city}, street{street}, houseNumber{houseNum}, flatNumber{flatNum}, index{index}{}

    void outputAdress()
    {
        std::cout << "Город: " << city << std::endl;
        std::cout << "Улица: " << street << std::endl;
        std::cout << "Номер дома: " << houseNumber << std::endl;
        std::cout << "Номер квартиры: " << flatNumber << std::endl;
        std::cout << "Индекс: " << index << std::endl;
    }

};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Adress user1{"Москва", "Арбат", 12, 8, 123456};
    Adress user2{"Ижевск", "Пушкина", 59, 143, 953769};

    user1.outputAdress();
    user2.outputAdress();

    return EXIT_SUCCESS;
}
