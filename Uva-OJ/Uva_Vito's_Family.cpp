#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int t, length, r[30000], i, j, k, temp, sum;
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        temp = 0;
        sum = 0;
        scanf ("%d", &length);
        for (j = 0; j < length; j++)
        {
            scanf ("%d", &r[j]);
        }
        for (j = 0; j < length - 1; j++)
        {
            for (k = 0; k < length - 1; k++)
            {N
                if (r[k] > r[k + 1])
                {
                    temp = r[k];
                    r[k] = r[k + 1];
                    r[k + 1] = temp;
                }
            }
        }
        sum += abs(r[k] - r[k+1]);
        printf ("%d\n", sum-2);
    }
    return 0;
}
