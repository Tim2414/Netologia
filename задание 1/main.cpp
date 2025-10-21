#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    bool var1 {1};
    bool var2 {0};
    bool var3 {1};
    bool var4 {0};

    std::cout << std::boolalpha;

    //Оператор ||
    std::cout << "Оператор: ||" << std::endl;
    std::cout << var1 << "\t" << var3 << "\t" << (var1 || var3) << std::endl;
    std::cout << var2 << "\t" << var1 << "\t" << (var2 || var1) << std::endl;
    std::cout << var1 << "\t" << var2 << "\t" << (var1 || var2) << std::endl;
    std::cout << var4 << "\t" << var2 << "\t" << (var4 || var2) << std::endl;

    //Оператор &&
    std::cout <<"\n"<< "Оператор: &&" << std::endl;
    std::cout << var1 << "\t" << var3 << "\t" << (var1 && var3) << std::endl;
    std::cout << var2 << "\t" << var1 << "\t" << (var2 && var1) << std::endl;
    std::cout << var1 << "\t" << var2 << "\t" << (var1 && var2) << std::endl;
    std::cout << var4 << "\t" << var2 << "\t" << (var4 && var2) << std::endl;
    return EXIT_SUCCESS;
}
