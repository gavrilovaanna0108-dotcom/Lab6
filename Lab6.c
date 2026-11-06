#include <stdio.h>
#include <locale.h>

int year(int yeas);
double calc(double x);
int mat(int n);

int main()
{
    setlocale(LC_CTYPE, "RUS");

    double x;
    int n;
    int yeas;

    printf("Введите год: ");
    if (scanf("%d", &yeas) == 1)
    {
        int is_leap = year(yeas);
        if (is_leap)
        {
            printf("%d Високосный год\n\n", yeas);
        }
        else
        {
            printf("%d Не високосный год\n\n", yeas);
        }
    }

    printf("Введите значение x: ");
    if (scanf("%lf", &x) == 1)
    {
        double res_calc = calc(x);
        printf("F(x) = %.2f\n\n", res_calc);
    }

    printf("Введите целое число N (меньше 1000): ");
    if (scanf("%d", &n) == 1)
    {
        if (n >= 1000)
        {
            printf("Ошибка: число должно быть меньше 1000.\n");
        }
        else
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
    }

    return 0;
}

int year(int yeas)
{
    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0))
    {
        return 1;
    }
    return 0;
}

double calc(double x)
{
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

    if (temp % 10 == 5)
    {
        return 1;
    }
    temp /= 10;

    if (temp % 10 == 5)
    {
        return 1;
    }
    temp /= 10;

    if (temp % 10 == 5)
    {
        return 1;
    }

    return 0;
}
