#include <stdio.h>
#define dim 3

int main ()
{
    int t, a[dim], i, k, j,m;
    scanf ("%d",&t);
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < dim; j++)
            scanf ("%d", &a[j]);
        for (k = 0; k < dim - 1; k++)
        {
            for (j = 0; j < dim - 1; j++)
            {
                if (a[j] > a[j + 1] || a[j] < a[j + 1])
                {
                    /*m = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = m;*/
                    printf ("Lumberjacks:\nOrdered\n");

                }
            }

        }
        /*if (a[0] + a[1] <= a[2])
            printf("Case %d: Invalid\n",i+1);
        else if(a[0] == a[1] && a[0] == a[2])
            printf("Case %d: Equiliteral\n",i+1);
        else if(a[0] == a[1] || a[0] == a[3] || a[1] == a[2])
            printf("Case %d: Isoscale\n",i+1);
        else if(a[0] != a[1] && a[1] != a[2] && a[0]!= a[2])
            printf("Case %d: Scalene\n",i+1);*/
    }
    return 0;
}
