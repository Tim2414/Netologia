#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <cstdlib>

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

    std::string get_city()
    {
        return city;
    }
};

void sort(Address** addresses, int size);

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

    sort(addresses, size);

    outFile << size << std::endl;

    for (int i = 0; i < size; ++i)
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

    std::cout << "Файл out.txt успешно создан!" << std::endl;

    return EXIT_SUCCESS;
}

void sort(Address** addresses, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (addresses[j]->get_city() > addresses[j + 1]->get_city())
            {
                Address* temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
            }
        }
    }
}
