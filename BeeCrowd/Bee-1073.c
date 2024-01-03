#include <stdio.h>
int main()
{
    unsigned i, N;
    scanf("%u", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%u^2 = %u\n", i, i*i);
        }
    }

    return 0;
}