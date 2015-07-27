#include <stdio.h>
int main ()
{
    int t, i, j, n, max, c;
    scanf ("%d", &t);
    for (i = 1; i <= t; i++)
    {
        max = 0;
        scanf ("%d", &n);
        for (j = 1; j <= n; j++)
        {
            scanf ("%d", &c);
            if (c > max)
                max = c;
        }
        printf ("Case %d: %d\n", i, max);
    }
    return 0;
}
