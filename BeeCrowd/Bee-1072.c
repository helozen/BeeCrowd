#include <stdio.h>
int main()
{
    int i, in = 0, out = 0, range;
    long long int data;
    scanf("%d", &range);

    for (i = 0; i < range; i++)
    {
        scanf("%lld", &data);
        if (data >= 10 && data <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}