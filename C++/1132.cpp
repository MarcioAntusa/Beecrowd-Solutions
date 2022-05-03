#include <stdio.h>

int main()
{
    int x, y, count = 0;

    scanf("%d %d", &x, &y);

    for (int i = x; i >= y; i--)
    {
        if ((i % 13) != 0)
        {
            count = count + i;
        }
    }

    if ((x && y) > 0)
    {
        for (int i = x; i <= y; i++)
        {
            if ((i % 13) != 0)
            {
                count = count + i;
            }
        }
    }

    printf("%d\n", count);
}