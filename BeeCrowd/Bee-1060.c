#include <stdio.h>
int main()
{
    float a, b, c, d, e, f;
    int n = 6;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    if (a < 0.00)
    {
        n -= 1;
    }
    if (b < 0.00)
    {
        n -= 1;
    }
    if (c < 0.00)
    {
        n -= 1;
    }
    if (d < 0.00)
    {
        n -= 1;
    }
    if (e < 0.00)
    {
        n -= 1;
    }
    if (f < 0.00)
    {
        n -= 1;
    }

    printf("%d valores positivos\n", n);

    return 0;
}