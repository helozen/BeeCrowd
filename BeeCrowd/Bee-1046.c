#include <stdio.h>

int main()
{

    int s, e, d;
    scanf("%d%d", &s, &e);

    if (s >= e)
    {
        d = 24 - s + e;
    }
    else
    {
        d = e - s;
    }
    printf("O JOGO DUROU %d HORA(S)\n", d);

    return 0;
}