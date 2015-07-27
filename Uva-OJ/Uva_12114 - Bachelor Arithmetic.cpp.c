#include <stdio.h>

int main ()
{
    int S, B, i, t;
    scanf ("%d%d", &B, &S);
    while (B != 0 && S != 0)
    {
        for (i = 1; i++)
        {
            printf ("Case %d: ", i);
            if (B <= 1)
                printf (":\\\n");
            else if
                prntf (":-|\n");
            else
                printf (":-(\n");
        }
        scanf ("%d%d", &B, &S);
    }
    return 0;
}
