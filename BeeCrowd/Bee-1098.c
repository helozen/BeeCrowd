#include <stdio.h>

int main()
{
    float i, j;

    for (i = 0; i <= 2.2; i += 0.2)
    {
        for (j = 1; j >= 3; j++)
        {
            if (i == (i) && j == (i + j))
            {
                printf("I=%d J=%d\n", i, j);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
    }
}