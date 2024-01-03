#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x;
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a < b)
    {
        x = a;
        a = b;
        b = x;
    }
    else if (a < c)
    {
        x = a;
        a = c;
        c = x;
    }
    else if (b < c)
    {
        x = b;
        b = c;
        c = x;
    }

    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
            printf("TRIANGULO RETANGULO\n");
        else if (pow(a, 2) > (pow(b, 2) + pow(c, 2)))
            printf("TRIANGULO OBTUSANGULO\n");
        else
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || b == c || a == c)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}