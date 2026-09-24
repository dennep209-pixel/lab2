#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Функція для обчислення y залежно від x
double f(double x)
{
    double y;
 // Якщо -5.2 <= x < 0
    if (x >= -5.2 && x < 0)
    {
        y = exp(-x) + 1;
    }
    // Якщо 0 <= x < 8
    else if (x >= 0 && x < 8)
    {
        y = exp(x) - 1;
    }
    // Якщо 8 <= x < 15
    else if (x >= 8 && x < 15)
    {
        y = sqrt(2 * x - 7) / sqrt(x * x - 25)
            + 2 * pow(x, exp(1));
    }
    // Для всіх інших значень x
    else
    {
        y = 0;
    }
    // Повернення результату
    return y;
}
int main()
{
    // Оголошення змінних
    double x, y;
    // Введення значення x
    printf("Enter x: ");
    scanf("%lf", &x);
    // Виклик функції
    y = f(x);
    // Виведення результату
    printf("x = %lf\n", x);
    printf("y = %lf\n", y);

    return 0;
}
