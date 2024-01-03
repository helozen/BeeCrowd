#include <stdio.h>
int main()
{
    float X, a, b;
    int c;
    scanf("%f", &X);

    if (X >= 0 && X <= 400.00)
    {
        c = 15;
        b = X * 0.15;
        a = X + b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: %d %\n", c);
    }
    else if (X >= 400.01 && X <= 800.00)
    {
        c = 12;
        b = X * 0.12;
        a = X + b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: %d %\n", c);
    }
    else if (X >= 800.01 && X <= 1200.00)
    {
        c = 10;
        b = X * 0.10;
        a = X + b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: %d %\n", c);
    }
    else if (X >= 1200.01 && X <= 2000.00)
    {
        c = 7;
        b = X * 0.07;
        a = X + b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: %d %\n", c);
    }
    else
    {
        c = 4;
        b = X * 0.04;
        a = X + b;
        printf("Novo salario: %.2f\n", a);
        printf("Reajuste ganho: %.2f\n", b);
        printf("Em percentual: %d %\n", c);
    }
    return 0;
}