#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, e1, e2, e3, e4, d1, d2, d3, d4;
    char c[5];

    scanf("%s %d", c, &s1);
    scanf("%d %s %d %s %d", &s2, c, &s3, c, &s4);

    scanf("%s %d", c, &e1);
    scanf("%d %s %d %s %d", &e2, c, &e3, c, &e4);

    int Start = (s1 * 24 * 60 * 60) + (s2 * 60 * 60) + (s3 * 60) + s4;
    int End = (e1 * 24 * 60 * 60) + (e2 * 60 * 60) + (e3 * 60) + e4;
    int Durat = End - Start;

    d1 = Durat / (24 * 60 * 60);
    Durat %= (24 * 60 * 60);
    d2 = Durat / (60 * 60);
    Durat %= (60 * 60);
    d3 = Durat / 60;
    Durat %= 60;
    d4 = Durat;

    printf("%d dia(s)\n", d1);
    printf("%d hora(s)\n", d2);
    printf("%d minuto(s)\n", d3);
    printf("%d segundo(s)\n", d4);

    return 0;
}