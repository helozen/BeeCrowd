#include<stdio.h>

int main()
{
    int n,i,in,total = 0,C = 0,R = 0,S = 0;
    char t;
    float c,r,s;
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        scanf("%d %c",&in,&t);
        if(t == 'C'){
            total += in;
            C += in;
        }
        else if(t == 'R'){
            total += in;
            R += in;
        }
        else if(t == 'S'){
            total += in;
            S += in;
        }
    }
    c = ((float)C/total)*100.00;
    r = ((float)R/total)*100.00;
    s = ((float)S/total)*100.00;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %%\n",c);
    printf("Percentual de ratos: %.2f %%\n",r);
    printf("Percentual de sapos: %.2f %%\n",s);

    return 0;
}