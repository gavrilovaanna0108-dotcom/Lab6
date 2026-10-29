#include <stdio.h>

int year(int yeas);
double calc(double x);
int mat(int n);

int main()
{
    double x;
    int n;
    int yeas;

    if (scanf("%d", &yeas) == 1)
    {
        int is_leap = year(yeas);
        if (is_leap)
        {
            printf("%d Високосный год\n", yeas);
        }
        else
        {
            printf("%d Не високосный год\n", yeas);
        }
    }

    if (scanf("%lf", &x) == 1)
    {
        double res_calc = calc(x);
        printf("F(x) = %.2f\n", res_calc);
    }

    if (scanf("%d", &n) == 1)
    {
        int has_five = mat(n);
        if (has_five)
        {
            printf("Цифра 5 входит в число\n");
        }
        else
        {
            printf("Не входит\n");
        }
    }

    return 0;
}

int year(int yeas)
{
    /*
    input: 2018 output: "год 2018 не високосный"
    input: 1900 output: "год 1900 не високосный"
    input: 2020 output: "год 2020 високосный"
    */
    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0))
    {
        return 1;
    }
    return 0;
}

double calc(double x)
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
    if (x <= 7.0)
    {
        return -3.0 * x + 9.0;
    }
    else
    {
        return 1.0 / (x - 7.0);
    }
}

int mat(int n)
{
    int temp = n < 0 ? -n : n;
    if (temp == 0)
    {
        return 0;
    }
    while (temp > 0)
    {
        if (temp % 10 == 5)
        {
            return 1;
        }
        temp /= 10;
    }
    return 0;
}
