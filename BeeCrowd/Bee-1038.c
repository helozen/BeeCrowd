#include<stdio.h>

int main()
{

    int X, Y;
    scanf("%d %d", &X, &Y);
    float CQ = 4.00, XS = 4.50, XB = 5.00, TS = 2.00, RF = 1.50;

    switch (X)
    {
    case 1:
        printf("Total: R$ %.2f\n", CQ * Y);
        break;
    case 2:
        printf("Total: R$ %.2f\n", XS * Y);
        break;
    case 3:
        printf("Total: R$ %.2f\n", XB * Y);
        break;
    case 4:
        printf("Total: R$ %.2f\n", TS * Y);
        break;
    case 5:
        printf("Total: R$ %.2f\n", RF * Y);
        break;
    }

    return 0;
}
