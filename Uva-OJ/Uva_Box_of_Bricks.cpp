#include <stdio.h>

int main ()
{
    int n, avg, temp, moves, x[100], i, kase = 0;
    while (1)
    {
        kase++;
        temp = 0;
        avg = 0;
        moves = 0;
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
        {
            scanf ("%d", &x[i]);
            temp += x[i];
        }
        avg = temp / n;
        for (i = 0; i < n; i++)
        {
            if (x[i] > avg)
            {
                moves += x[i] - avg;
            }
        }
        printf ("Set #%d\n", kase);
        printf ("The minimum number of moves is %d.\n\n",  moves);
    }

    return 0;
}
