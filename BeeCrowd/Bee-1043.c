#include<stdio.h>

int main()
{
    float x,y,z,p,a;
    scanf("%f%f%f",&x,&y,&z);
    
    p = x+y+z;
    a = 0.5*(x+y)*z;
    
    if(x+y<=z || y+z<=x || x+z<=y)
        printf("Area = %.1f\n",a);
    else
        printf("Perimetro = %.1f\n",p);
    
    return 0;
}