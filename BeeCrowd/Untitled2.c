#include <stdio.h>
int main()
{
    float f, r1, r2, r3, t1, t2, t3;
    scanf("%f", &f);

    if (f <= 2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        if (f >= 2000.01 && f < 3000.00)
        {
            t1 = f - 2000.00;
            r1 = t1 * 0.08;
        }
        else if (f >= 3000.01 && f < 4500.00)
        {
            t2 = f - 3000.00;
            r2 = t2 * 0.18;
        }
        else
        {
            t3 = f - 4500.00;
            r3 = t3 * 0.28;
        }
        printf("R$ %.2f\n", r1 + r2 + r3);
    }
    return 0;
}
