#include <stdio.h>

int main ()
{
    unsigned t, i, s, d;
    int score, result;
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf ("%u%u", &s, &d);
        score = (s - d) / 2;
        result = s - score;
        if (result < score || (s - d) % 2)
        {
            printf ("impossible\n");
        }
        else
        {
            printf ("%u %u\n", result, score);
        }
    }
    return 0;
}
