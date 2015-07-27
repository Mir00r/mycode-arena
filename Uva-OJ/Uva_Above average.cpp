#include <stdio.h>

int main ()
{
    int t, n, i , j, a[1000], sum, avg, count, l, x, y;

    scanf ("%d", &t);
    for (i = 0; i <= t; i++)
    {
        scanf ("%d", &n);
        if (n >= 1 && n <= 1000)
        {
            for (j = 0; j <= n; j++)
            {
                count = 0;
                scanf ("%d", &a[j]);
                sum += a[j];
                avg = sum / n;
                if (avg < a[j])
                {
                    count = avg;
                        count++;
                    l = count;
                }
                x = l / n;
                y = x * 100;
            }
        }
        printf ("%.3d%\n", y);
    }

    return 0;
}
