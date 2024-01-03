#include <stdio.h>
int main()
{
    float a, b, c, d, e, f, T;
    int n = 6;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    if (a < 0.00)
    {
        n -= 1;
    }
    else
    {
        T += a;
    }
    if (b < 0.00)
    {
        n -= 1;
    }
    else
    {
        T += b;
    }
    if (c < 0.00)
    {
        n -= 1;
    }
    else
    {
        T += c;
    }
    if (d < 0.00)
    {
        n -= 1;
    }
    else
    {
        T += d;
    }
    if (e < 0.00)
    {
        n -= 1;
    }
    else
    {
        T += e;
    }
    if (f < 0.00)
    {
        n -= 1;
    }
    else
    {
        T += f;
    }

    printf("%d valores positivos\n", n);
    printf("%.1f\n", T / n);

    return 0;
}