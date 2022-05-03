#include <stdio.h>

using namespace std;

int main()
{
    int n, num, calc, count;

    while (scanf("%d", &n) != EOF)
    {
        count = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num);

            if (num == 1)
            {
                count += 10;
            }
        }

        calc = n * 10 / 3 * 2;

        if (count >= calc)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
    }
}