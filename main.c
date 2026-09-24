#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Функція для обчислення y залежно від x
double f(double x)
{
    double y;
    // Перевірка значення x
    if (x < 0)
    {
        y = x;
    }
    else
    {
        y = x + 1;
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
