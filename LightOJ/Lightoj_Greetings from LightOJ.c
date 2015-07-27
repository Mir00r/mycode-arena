#include <stdio.h>

int main ()
{
    int t, a, b, c, i;
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf ("%d%d", &a, &b);
        c = a + b;
        printf ("Case %d: %d\n", i+1, c);
    }
    return 0;
}
