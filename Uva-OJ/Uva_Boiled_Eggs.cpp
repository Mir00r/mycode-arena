#include <stdio.h>

int main ()
{
    int t, i, j, n, p , q, weight[1000], sum, count;
    scanf ("%d", &t);
    for (i = 1; i <= t; i++)
    {
        sum = 0;
        count = 0;
        scanf ("%d%d%d", &n, &p, &q);
        for (j = 1; j <= n; j++)
        {
            scanf ("%d", &weight[j]);
        }
        for (j = 1; j <= n && j <= p; j++)
        {
            sum += weight[j];
            if (sum > q)
                break;
            count++;
            //printf ("Count = %d\n", count);
        }
        printf ("Case %d: %d\n", i, count);
    }
    return 0;
}
