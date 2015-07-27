#include <stdio.h>

int main ()
{
    int t, i, n, j, x[2000], mile, juice;
    scanf ("%d", &t);
    for (i = 1; i <= t; i++)
    {
        mile = 0;
        juice = 0;
        scanf ("%d", &n);
        for (j = 0; j < n; ++j)
        {
            scanf ("%d", &x[i]);
            mile += (x[i] + 30) / 30;
            printf (" Mile %d\n\n", mile);

            juice += (x[i] + 60) / 60;
            printf (" Juice %d\n\n", juice);
        }
        mile *= 10;
        juice *= 15;
        printf ("Case %d:", i);
        if (mile < juice)
            printf (" Mile %d\n", mile);

        else if (juice < mile)
            printf (" Juice %d\n", juice);

        else
            printf (" Mile Juice %d\n", mile);
    }
    return 0;
}


/*#include <stdio.h>
int main(void)
{
    int T, N, mile, juice, x, i, j;
    scanf("%d",&T);
    for(j = 1; j <= T; j++)
    {
        scanf("%d",&N);
        mile = juice = 0;
        for(i = 0; i < N; ++i)
        {
            scanf("%d",&x);
            mile += (x + 30)/30;
            juice += (x + 60)/60;
        }
        mile *= 10;
        juice *= 15;
        printf("Case %d: ", j);
        if(mile < juice)
            printf("Mile %d\n",mile);
        else if(juice < mile)
            printf("Juice %d\n",juice);
        else
            printf("Mile Juice %d\n",mile);
    }
    return 0;
}*/

