#include <stdio.h>
int main()
{
    int t, x, sum, y[1000], i, j, count;
    scanf ("%d", &t);
    if (count > 0)
            printf("\n");
        count++;
    for (i = 0; i < t; i++)
    {
        count = 0;
        sum = 0;
        scanf ("%d", &x);
        for (j = 0; j < x; j++)
        {
            scanf ("%d", &y[j]);
            if (y[j] > 0)
                sum += y[j];
        }
        printf ("Case %d: %d\n", i+1, sum);
    }
    return 0;
}



/*#include <cstdio>

int main()
{
	int test, cs, n, a, s;
	scanf("%d", &test);
	for(cs = 1; cs <= test; cs++)
	{
		scanf("%d", &n);
		s = 0;
		while(n--)
		{
			scanf("%d", &a);
			if(a > 0)
                s += a;
		}
		printf("Case %d: %d\n", cs, s);
	}
	return 0;
}*/
