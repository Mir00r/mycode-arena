#include <stdio.h>

int main ()
{
    int t, i, j, n, street, result, max, min;
    scanf ("%d", &t);
    for (i = 1; i <= t; i++)
    {
        max = -1;
        min = 300;
        scanf ("%d", &n);
        for (j = 1; j <= n; j++)
        {
            scanf ("%d", &street);

            if (min > street)
            {
                min = street;
                //printf ("min = %d\n\n", min);
            }

            else if (max < street)
            {
                max = street;
                //printf ("max = %d\n\n", max);
            }
        }
        result = (max - min) * 2;
        printf ("%d\n", result);
    }
    return 0;
}
