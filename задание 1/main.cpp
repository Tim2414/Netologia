#include <iostream>

int sum(int num1, int num2);
int diff(int num1, int num2);
int multiplication(int num1, int num2);
double division(int num1, int num2);

int main()
{
	int a = 5, b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;

	return 0;
}

int sum(int num1, int num2){ return num1 + num2; }
int diff(int num1, int num2){ return num1 - num2; }
int multiplication(int num1, int num2){ return num1 * num2; }
double division(int num1, int num2){ return static_cast<double>(num1) / static_cast<double>(num2); }
