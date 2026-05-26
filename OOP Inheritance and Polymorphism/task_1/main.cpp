#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>

class Figure
{
private:
    int sides_count{};
    std::string name{};

protected:
    Figure(std::string setName, int setSidesCount) : sides_count{setSidesCount}, name{setName}{}

public:
    Figure() : Figure("Фигура", 0){}

    int get_sides_count()
    {
        return sides_count;
    }

    std::string get_name()
    {
        return name;
    }
};

class Triangle : public Figure
{
public:
    Triangle() : Figure("Треугольник", 3){}
};

class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure("Четырёхугольник", 4){}
};

void print_info(Figure& figure);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure{};
    Triangle triangle{};
    Quadrangle quadrangle{};

    std::cout << "Количество сторон:" << std::endl;

    print_info(figure);
    print_info(triangle);
    print_info(quadrangle);

    return EXIT_SUCCESS;
}

void print_info(Figure& figure)
{
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
}
