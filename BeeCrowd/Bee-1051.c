#include <stdio.h>
int main()
{
    float f, r, r1, r2, r3, t1, t2, t3;
    scanf("%f", &f);

    t3 = f - 4500.00;
    t2 = f - 3000.00 - t3;
    t1 = f - 2000.00 - t3 - t2;

    if (f <= 2000.00)
    {
        printf("Isento\n");
    }
    if (f >= 4500.01)
    {
        r3 = t3 * 0.28;
    }
    if (t2 <= 1500.01)
    {
        r2 = t2 * 0.18;
    }
    if (t1 <= 1000.01)
    {
        r1 = t1 * 0.08;
    }

    r = r1 + r2 + r3;

    printf("R$ %.2f\n", r);
    return 0;
}