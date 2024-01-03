#include <stdio.h>

int main()
{

    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if (m1 > m2)
    {
        m2 += 60;
        h2 -= 1;
        m2 -= m1;
        if (h1 > h2)
        {
            h2 += 24;
            h2 -= h1;
        }
        else
        {
            h2 -= h1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2, m2);
    }
    else if (h1 == h2 && m1 == m2)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if (m1 < m2)
    {
        m2 -= m1;
        if (h1 > h2)
        {
            h2 += 24;
            h2 -= h1;
        }
        else
        {
            h2 -= h1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2, m2);
    }

    return 0;
}
