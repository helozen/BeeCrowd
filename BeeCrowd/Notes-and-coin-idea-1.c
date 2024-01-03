#include<stdio.h>

int main()
{
    int temp, hnd, fty, tnt, ten, fiv, tow;
    double N, one, c50, c25, c10, c5, c1;

    scanf("%lf",&N);
    printf("NOTAS:\n");

    hnd = N/100;
    printf("%d nota(s) de R$ 100.00\n",hnd);
    temp = (int)N%100;

    fty = temp/50;
    printf("%d nota(s) de R$ 50.00\n",fty);
    temp = temp%50;

    tnt = temp/20;
    printf("%d nota(s) de R$ 20.00\n",tnt);
    temp = temp%20;

    ten = temp/10;
    printf("%d nota(s) de R$ 10.00\n",ten);
    temp = temp%10;

    fiv = temp/5;
    printf("%d nota(s) de R$ 5.00\n",fiv);
    temp = temp%5;

    tow = temp/2;
    printf("%d nota(s) de R$ 2.00\n",tow);
    temp = temp%2;

    printf("MOEDAS:\n");

    one = temp/1;
    printf("%d moeda(s) de R$ 1.00\n",one);
    temp = temp%1;

    /*c50 = temp/0.50;
    printf("%d moeda(s) de R$ 0.50\n",c50);
    temp = temp%0.50;

    c25 = temp/0.25;
    printf("%d moeda(s) de R$ 0.25\n",c25);
    temp = temp%0.25;

    c10 = temp/0.10;
    printf("%d moeda(s) de R$ 0.10\n",c10);
    temp = temp%0.10;

    c05 = temp/0.05;
    printf("%d moeda(s) de R$ 0.05\n",c05);
    temp = temp%0.05;

    c01 = temp/0.01;
    printf("%d moeda(s) de R$ 0.01\n",c01);
    temp = temp%0.01;*/

    return 0;
}
