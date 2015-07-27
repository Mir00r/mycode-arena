#include <stdio.h>

int main()
{
    int n, count, div, mod;
    while (scanf("%d", &n) == 1)
    {
        count = 0;
        count = n;
        while (n >= 3)
        {
            div = n / 3;
            mod = n % 3;
            count += div;
            n = div + mod;
        }
        if (n == 2)
        {
            printf ("%d\n", count+1);
        }
        else
        {
            printf("%d\n", count);
        }
    }

    return 0;
}
