#include <stdio.h>

int main ()
{
    int t, n[200000], i, j, a, flip;

    while (scanf ("%d", &t) == 1)
    {
        flip = 0;
        for (i = 0; i < t; i++)
        {
            scanf ("%d", &n[i]);
        }
        for (j = 0; j < t-1; j++)
        {
            for (i = 0; i < t-1; i++)
            {
                if (n[i] > n[i+1])
                {
                    a = n[i];
                    n[i] = n[i+1];
                    n[i+1] = a;
                    flip++;
                }
            }
        }
        printf ("Minimum exchange operations : %d\n", flip);
    }
    return 0;
}

