#include <stdio.h>

int main()
{
    double value;
    int notes[6] = {100, 50, 20, 10, 5, 2};
    double coins[6] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};
    int note_count, coin_count, i;

    scanf("%lf", &value);
    printf("NOTAS:\n");
    for (i = 0; i < 6; i++)
    {
        note_count = (int)(value / notes[i]);
        printf("%d nota(s) de R$ %.2lf\n", note_count, (double)notes[i]);
        value -= note_count * notes[i];
    }
    printf("MOEDAS:\n");
    for (i = 0; i < 6; i++)
    {
        coin_count = (int)(value / coins[i]);
        printf("%d moeda(s) de R$ %.2lf\n", coin_count, coins[i]);
        value -= coin_count * coins[i];
    }
    return 0;
}
