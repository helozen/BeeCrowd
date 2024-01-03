#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

if (a % 2 == 0) even++;
    else odd++;
    if (a > 0) pos++;
    else if (a < 0) neg++;

    if (b % 2 == 0) even++;
    else odd++;
    if (b > 0) pos++;
    else if (b < 0) neg++;

    if (c % 2 == 0) even++;
    else odd++;
    if (c > 0) pos++;
    else if (c < 0) neg++;

    if (d % 2 == 0) even++;
    else odd++;
    if (d > 0) pos++;
    else if (d < 0) neg++;

    if (e % 2 == 0) even++;
    else odd++;
    if (e > 0) pos++;
    else if (e < 0) neg++;

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}