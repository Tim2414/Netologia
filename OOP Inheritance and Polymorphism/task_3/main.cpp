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

    virtual bool check()
    {
        return sides_count == 0;
    }

    virtual void print_info()
    {
        std::cout << get_name() << ":" << std::endl;

        if (check())
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Неправильная" << std::endl;
        }

        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
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
    Triangle(std::string setName, int setA, int setB, int setC,
             int setAngleA, int setAngleB, int setAngleC)
        : Figure(setName, 3),
          a{setA}, b{setB}, c{setC},
          A{setAngleA}, B{setAngleB}, C{setAngleC}{}

public:
    Triangle()
        : Triangle("Треугольник", 10, 20, 30, 50, 60, 70){}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }

    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }

    bool check() override
    {
        return get_sides_count() == 3 && A + B + C == 180;
    }

    void print_info() override
    {
        Figure::print_info();

        std::cout << "Стороны: "
                  << "a=" << a << " "
                  << "b=" << b << " "
                  << "c=" << c << std::endl;

        std::cout << "Углы: "
                  << "A=" << A << " "
                  << "B=" << B << " "
                  << "C=" << C << std::endl;
    }
};

class RightTriangle : public Triangle
{
public:
    RightTriangle(int setA = 10, int setB = 20, int setC = 30,
                  int setAngleA = 50, int setAngleB = 40) : Triangle("Прямоугольный треугольник", setA, setB, setC, setAngleA, setAngleB, 90){}

    bool check() override
    {
        return Triangle::check() && get_C() == 90;
    }
};

class IsoscelesTriangle : public Triangle
{
protected:
    IsoscelesTriangle(std::string setName, int setA, int setB, int setAngleA, int setAngleB) : Triangle(setName, setA, setB, setA, setAngleA, setAngleB, setAngleA){}

public:
    IsoscelesTriangle(int setA = 10, int setB = 20, int setAngleA = 50, int setAngleB = 80) : IsoscelesTriangle("Равнобедренный треугольник", setA, setB, setAngleA, setAngleB){}

    bool check() override
    {
        return Triangle::check() && get_a() == get_c() && get_A() == get_C();
    }
};

class EquilateralTriangle : public IsoscelesTriangle
{
public:
    EquilateralTriangle(int setA = 30) : IsoscelesTriangle("Равносторонний треугольник", setA, setA, 60, 60){}

    bool check() override
    {
        return IsoscelesTriangle::check() &&
               get_a() == get_b() &&
               get_b() == get_c() &&
               get_A() == 60 &&
               get_B() == 60 &&
               get_C() == 60;
    }
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
        : Figure(setName, 4), a{setA}, b{setB}, c{setC}, d{setD}, A{setAngleA}, B{setAngleB}, C{setAngleC}, D{setAngleD}{}

public:
    Quadrangle() : Quadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80){}

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }

    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }

    bool check() override
    {
        return get_sides_count() == 4 && A + B + C + D == 360;
    }

    void print_info() override
    {
        Figure::print_info();

        std::cout << "Стороны: "
                  << "a=" << a << " "
                  << "b=" << b << " "
                  << "c=" << c << " "
                  << "d=" << d << std::endl;

        std::cout << "Углы: "
                  << "A=" << A << " "
                  << "B=" << B << " "
                  << "C=" << C << " "
                  << "D=" << D << std::endl;
    }
};

class RectangleFigure : public Quadrangle
{
protected:
    RectangleFigure(std::string setName, int setA, int setB) : Quadrangle(setName, setA, setB, setA, setB, 90, 90, 90, 90){}

public:
    RectangleFigure(int setA = 10, int setB = 20) : RectangleFigure("Прямоугольник", setA, setB){}

    bool check() override
    {
        return Quadrangle::check() &&
               get_a() == get_c() &&
               get_b() == get_d() &&
               get_A() == 90 &&
               get_B() == 90 &&
               get_C() == 90 &&
               get_D() == 90;
    }
};

class Square : public RectangleFigure
{
public:
    Square(int setA = 20) : RectangleFigure("Квадрат", setA, setA){}

    bool check() override
    {
        return RectangleFigure::check() &&
               get_a() == get_b() &&
               get_b() == get_c() &&
               get_c() == get_d();
    }
};

class Parallelogram : public Quadrangle
{
protected:
    Parallelogram(std::string setName, int setA, int setB, int setAngleA, int setAngleB)
        : Quadrangle(setName, setA, setB, setA, setB, setAngleA, setAngleB, setAngleA, setAngleB){}

public:
    Parallelogram(int setA = 20, int setB = 30, int setAngleA = 30, int setAngleB = 40)
        : Parallelogram("Параллелограмм", setA, setB, setAngleA, setAngleB){}

    bool check() override
    {
        return Quadrangle::check() &&
               get_a() == get_c() &&
               get_b() == get_d() &&
               get_A() == get_C() &&
               get_B() == get_D();
    }
};

class Rhombus : public Parallelogram
{
public:
    Rhombus(int setA = 30, int setAngleA = 30, int setAngleB = 40) : Parallelogram("Ромб", setA, setA, setAngleA, setAngleB){}

    bool check() override
    {
        return Parallelogram::check() &&
               get_a() == get_b() &&
               get_b() == get_c() &&
               get_c() == get_d();
    }
};

void print_info(Figure* figure);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure{};
    Triangle triangle{};

    RightTriangle badRightTriangle{10, 20, 30, 50, 60};
    RightTriangle rightTriangle{};

    IsoscelesTriangle isoscelesTriangle{10, 20, 50, 60};
    EquilateralTriangle equilateralTriangle{};

    Quadrangle quadrangle{};
    RectangleFigure rectangle{};
    Square square{};
    Parallelogram parallelogram{};
    Rhombus rhombus{};

    Figure* figures[]
    {
        &figure,
        &triangle,
        &badRightTriangle,
        &rightTriangle,
        &isoscelesTriangle,
        &equilateralTriangle,
        &quadrangle,
        &rectangle,
        &square,
        &parallelogram,
        &rhombus
    };

    for (Figure* figurePtr : figures)
    {
        print_info(figurePtr);
    }

    return EXIT_SUCCESS;
}

void print_info(Figure* figure)
{
    figure->print_info();
    std::cout << std::endl;
}
