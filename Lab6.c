#include <stdio.h>

int year(int yeas);
int calc(double x);
int mat(int n);

int main()
{
    double x;
    int n;
    int yeas;

    scanf("%d", &yeas);
    year(yeas);

    scanf("%lf", &x);
    calc(x);

    scanf("%d", &n);
    mat(n);
    return 0;
}

int year(int yeas)
{
    float c;
    /*
    input: 2018 output: "год 2018 не високосный"
    input: 1900 output: "год 1900 не високосный"
    input: 2020 output: "год 2020 високосный"
    */
    c = yeas % 4;
    if ((c == 0) && (yeas % 100 != 0) || (yeas % 400 == 0))
    {
        printf("%d Високосный год\n", yeas);
    }
    else
    {
        printf("%d Не високосный год\n", yeas);
    }
    return 0;
}

int calc(double x)
{
    /*
        1) x <= 7:
        Вход:  x = 5.0
        Расчёт: F(5) = -3 * 5 + 9 = -15 + 9 = -6.0
        Вывод: x = 5.00, F(x) = -6.00

        2) x > 7:
        Вход:  x = 9.0
        Расчёт: F(9) = 1 / (9 - 7) = 1 / 2 = 0.5
        Вывод: x = 9.00, F(x) = 0.50
    */
    printf("F(x) = %.2f\n", (x <= 7) ? (-3.0 * x + 9.0) : (1.0 / (x - 7.0)));
    return 0;
}

int mat(int n)
{
    int units = n % 10;
    int tens = (n / 10) % 10;
    int hundreds = n / 100;

    if (units == 5 || tens == 5 || hundreds == 5)
    {
        printf("Цифра 5 входит в число");
    }
    else
    {
        printf("Не входит");
    }

    return 0;
}