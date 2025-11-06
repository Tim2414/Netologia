#include <iostream>
#include <Windows.h>

int exponentiation(int val, int pow);
void separateOutput(int val, int pow, int res);
int exponentiationOutput(int val, int pow, bool output);

// Жаль, что не прошли пока еще классы, так как довольно глупо в одной функции exponentiationOutput писать и подсчет, и вывод. Хочется избежать бессмсыленного повторного использования cout.
// А вариант разделить на exponentiation и output - более правильный, но имел бы смысл только в классе (с кучей ошибочных сценариев).
int main()
{
    SetConsoleOutputCP(1251);

    int value{5}, power{2};
    bool output {1};
    exponentiationOutput(value, power, output);

    value = 3, power = 3;
    exponentiationOutput(value, power, output);

    value = 4, power = 4;
    exponentiationOutput(value, power, output);

    return EXIT_SUCCESS;
}

int exponentiation(int val, int pow)
{
    int result{1};
    for (int i = 0; i < pow; i++)
    {
        result *= val;
    }
    return result;
}

void separateOutput(int val, int pow, int res)
{
    std::cout << val << " в степени " << pow << " = " << res << std::endl;
}

int exponentiationOutput(int val, int pow, bool output)
{
    int result{1};
    for (int i = 0; i < pow; i++)
    {
        result *= val;
    }

    if ( output == 1 )
    {
        std::cout << val << " в степени " << pow << " = " << result << std::endl;
    }

    return result;
}
