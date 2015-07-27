#include <stdio.h>

int main ()
{
    int t, n, k, pass, i, temp, temp_1,coach;
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf ("%d%d%d", &n, &k, &pass);
        if ((n >= 2 && n <= 23) && (k >= 1 && k <= n) && (pass >= 1 && pass <= 200))
        {
            temp = pass % n;
            coach = temp + k;
            if (coach > n)
            {
                temp_1 = coach % n;
                printf ("Case %d: %d\n", i+1, temp_1);
            }
            else
                printf ("Case %d: %d\n", i+1, coach);
        }
    }
    return 0;
}
