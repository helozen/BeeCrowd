#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        for (i = n; i <= n + 11; i++)
        {
            printf("%d\n", i);
            i += 1;
        }
    }
    else
    {
        n += 1;
        for (i = n; i <= n + 11; i++)
        {
            printf("%d\n", i);
            i += 1;
        }
    }
    return 0;
}