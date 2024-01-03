#include<stdio.h>

int main()
{
    int n,i,x=0,y;
    
    for(i=1; i<=100; i++)
    {
        scanf("%d",&n);
        if(n>x){x=n; y = i;}
    }
    printf("%d\n%d\n",x,y);
    return 0;
}