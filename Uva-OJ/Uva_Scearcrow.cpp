/*#include <stdio.h>
int main ()
{
    int t, i, j, k, n, count;
    char str[110];
    while (scanf ("%d", &t) == 1)
    {
        for (i = 1; i <= t; i++)
        {
            count = 0;
            //j = 0;
            scanf ("%d%s", &n, str);
            for (j = 1; j <= n;)
            {
                if (str[j] == '#')
                    j++;
                else
                {
                    count++;
                    j += 3;
                }
            }
            printf ("Case %d: %d\n", i, count);
        }
        break;
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int t, n, j, count, i;
    char str[110];
    while(scanf("%d",&t) == 1)
    {
        for(j = 1; j <= t; j++)
        {
            scanf("%d %s", &n, str);
            count = 0;
            for(i = 0; i < n;)
            {
                if(str[i] == '#')
                    i++;
                else
                {
                    count++;
                    i += 3;
                }
            }
            printf("Case %d: %d\n", j, count);
        }
        break;
    }
    return 0;
}
