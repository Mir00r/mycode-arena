#include <stdio.h>
#include <string.h>

char s[300000], t[300000];
int main ()
{
    int len_s, len_t, i, j, k;
    while (scanf("%s %s", s, t) != EOF)
    {
        len_s = strlen(s);
        len_t = strlen(t);
        j = 0;
        for (i = 0; i < len_t; i++)
            if (t[i] == s[j])
                j++;
            if (j == len_s)
                printf ("Yes\n");
            else
                printf ("No\n");
    }
    return 0;
}
