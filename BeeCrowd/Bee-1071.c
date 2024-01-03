#include <stdio.h>
int main()
{
    int i, x, y, n = 0;
    scanf("%d %d", &x, &y);

    for (i = y + 1; i < x; i++)
    {
        if (i % 2 != 0)
        {
            n += i;
        }
    }
    printf("%d\n", n);
    return 0;
}