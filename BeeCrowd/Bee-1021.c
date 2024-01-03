#include <stdio.h>
int main()
{
    double main_balance;
    int dollar[7] = {100, 50, 20, 10, 5, 2, 1}, note[7], a;
    int cent[5] = {50, 25, 10, 5, 1}, coin[5], i;
    scanf("%lf", &main_balance);
    a = main_balance;

    for (i = 0; i < 7; i++)
    {
        note[i] = a / dollar[i];
        a %= dollar[i];
    }

    a = main_balance * 100;
    a %= 100;

    for (i = 0; i < 5; i++)
    {
        coin[i] = a / cent[i];
        a %= cent[i];
    }

    printf("NOTAS:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d nota(s) de R$ %d.00\n", note[i], dollar[i]);
    }

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2f\n", note[6], (float)dollar[6]);

    for (i = 0; i < 5; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n", coin[i], (float)cent[i] / 100);
    }

    return 0;
}
