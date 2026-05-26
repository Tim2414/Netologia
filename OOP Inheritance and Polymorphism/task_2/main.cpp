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

    virtual std::string get_name()
    {
        return name;
    }

    int get_sides_count()
    {
        return sides_count;
    }

    virtual std::string get_sides_info()
    {
        return "";
    }

    virtual std::string get_angles_info()
    {
        return "";
    }

    virtual ~Figure()
    {
    }
};

class Triangle : public Figure
{
private:
    int a{};
    int b{};
    int c{};
    int A{};
    int B{};
    int C{};

protected:
    Triangle(std::string setName, int setA, int setB, int setC, int setAngleA, int setAngleB, int setAngleC) : Figure(setName, 3), a{setA}, b{setB}, c{setC}, A{setAngleA}, B{setAngleB}, C{setAngleC}{}

public:
    Triangle() : Triangle("Треугольник", 10, 20, 30, 50, 60, 70){}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }

    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }

    std::string get_sides_info() override
    {
        return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
    }

    std::string get_angles_info() override
    {
        return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
    }
};

class RightTriangle : public Triangle
{
public:
    RightTriangle() : Triangle("Прямоугольный треугольник", 10, 20, 30, 50, 40, 90){}
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle() : Triangle("Равнобедренный треугольник", 10, 20, 10, 50, 60, 50){}
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle() : Triangle("Равносторонний треугольник", 30, 30, 30, 60, 60, 60){}
};

class Quadrangle : public Figure
{
private:
    int a{};
    int b{};
    int c{};
    int d{};
    int A{};
    int B{};
    int C{};
    int D{};

protected:
    Quadrangle(std::string setName, int setA, int setB, int setC, int setD,
               int setAngleA, int setAngleB, int setAngleC, int setAngleD)
        : Figure(setName, 4),
          a{setA}, b{setB}, c{setC}, d{setD},
          A{setAngleA}, B{setAngleB}, C{setAngleC}, D{setAngleD}{}

public:
    Quadrangle()
        : Quadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80)
    {
    }

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }

    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }

    std::string get_sides_info() override
    {
        return "a=" + std::to_string(a) + " b=" + std::to_string(b) +
               " c=" + std::to_string(c) + " d=" + std::to_string(d);
    }

    std::string get_angles_info() override
    {
        return "A=" + std::to_string(A) + " B=" + std::to_string(B) +
               " C=" + std::to_string(C) + " D=" + std::to_string(D);
    }
};

class RectangleFigure : public Quadrangle
{
public:
    RectangleFigure() : Quadrangle("Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90){}
};

class Square : public Quadrangle
{
public:
    Square(): Quadrangle("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90){}
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram() : Quadrangle("Параллелограмм", 20, 30, 20, 30, 30, 40, 30, 40){}
};

class Rhombus : public Quadrangle
{
public:
    Rhombus()
        : Quadrangle("Ромб", 30, 30, 30, 30, 30, 40, 30, 40)
    {
    }
};

void print_info(Figure* figure);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle{};
    RightTriangle rightTriangle{};
    IsoscelesTriangle isoscelesTriangle{};
    EquilateralTriangle equilateralTriangle{};

    Quadrangle quadrangle{};
    RectangleFigure rectangle{};
    Square square{};
    Parallelogram parallelogram{};
    Rhombus rhombus{};

    print_info(&triangle);
    print_info(&rightTriangle);
    print_info(&isoscelesTriangle);
    print_info(&equilateralTriangle);

    print_info(&quadrangle);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhombus);

    return EXIT_SUCCESS;
}

void print_info(Figure* figure)
{
    std::cout << figure->get_name() << ":" << std::endl;
    std::cout << "Стороны: " << figure->get_sides_info() << std::endl;
    std::cout << "Углы: " << figure->get_angles_info() << std::endl;
    std::cout << std::endl;
}
