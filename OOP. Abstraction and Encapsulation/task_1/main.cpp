#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

class Address
{
private:
    std::string city{};
    std::string street{};
    int house{};
    int flat{};

public:
    Address(std::string setCity, std::string setStreet, int setHouse, int setFlat)
        : city{setCity}, street{setStreet}, house{setHouse}, flat{setFlat}
    {
    }

    std::string get_out_address()
    {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream inFile{"in.txt"};
    std::ofstream outFile{"out.txt"};

    if (!inFile)
    {
        std::cout << "Ошибка открытия файла in.txt!" << std::endl;
        return EXIT_FAILURE;
    }

    if (!outFile)
    {
        std::cout << "Ошибка открытия файла out.txt!" << std::endl;
        return EXIT_FAILURE;
    }

    int size{};
    inFile >> size;

    Address** addresses = new Address*[size];

    std::string city{};
    std::string street{};
    int house{};
    int flat{};

    for (int i = 0; i < size; ++i)
    {
        inFile >> city;
        inFile >> street;
        inFile >> house;
        inFile >> flat;

        addresses[i] = new Address{city, street, house, flat};
    }

    outFile << size << std::endl;

    for (int i = size - 1; i >= 0; --i)
    {
        outFile << addresses[i]->get_out_address() << std::endl;
    }

    for (int i = 0; i < size; ++i)
    {
        delete addresses[i];
    }

    delete[] addresses;

    inFile.close();
    outFile.close();

    std::cout << "Файл успешно создан!" << std::endl;

    return EXIT_SUCCESS;
}
