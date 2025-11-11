#include <iostream>

void specInformation(int& num);
void specInformation(short& num);
void specInformation(long& num);
void specInformation(long long& num);
void specInformation(float& num);
void specInformation(double& num);
void specInformation(long double& num);
void specInformation(bool& num);

int main()
{
    int num1{};
    short num2{};
    long num3{};
    long long num4{};
    float num5{};
    double num6{};
    long double num7{};
    bool num8{};

    specInformation(num1);
    specInformation(num2);
    specInformation(num3);
    specInformation(num4);
    specInformation(num5);
    specInformation(num6);
    specInformation(num7);
    specInformation(num8);

    return EXIT_SUCCESS;
}

void specInformation(int& num){ std::cout << "int: " << &num << " " << sizeof(num) << std::endl;}
void specInformation(short& num){ std::cout << "short: " << &num << " " << sizeof(num) << std::endl;}
void specInformation(long& num){ std::cout << "long: " << &num << " " << sizeof(num) << std::endl;}
void specInformation(long long& num){ std::cout << "long long: " << &num << " " << sizeof(num) << std::endl;}
void specInformation(float& num){ std::cout << "float: " << &num << " " << sizeof(num) << std::endl;}
void specInformation(double& num){ std::cout << "double: " << &num << " " << sizeof(num) << std::endl;}
void specInformation(long double& num){ std::cout << "long double: " << &num << " " << sizeof(num) << std::endl;}
void specInformation(bool& num){ std::cout << "bool: " << &num << " " << sizeof(num) << std::endl;}
