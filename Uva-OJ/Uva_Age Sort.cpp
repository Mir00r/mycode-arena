#include<algorithm>
#include<stdio.h>

using namespace std;
long int a[2000005],i,n;
int main(){
    while (scanf("%ld",&n) != EOF){
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
            scanf("%ld",&a[i]);
        sort(a, a+n);
        for (i = 0; i < n; i++){
            printf("%ld",a[i]);
            if (i < (n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}



/*#include <stdio.h>

int main ()
{
    long int t, n[2000005], i, j, a;
    scanf ("%ld", &t);
        while (t != 0)
        {
            for (i = 0; i < t; i++)
            {
                scanf ("%ld", &n[i]);
            }

            for (j = 0; j < t-1; j++)
            {
                for (i = 0; i < t-1; i++)
                {
                    if (n[i] > n[i+1])
                    {
                        a = n[i];
                        n[i] = n[i+1];
                        n[i+1] = a;
                    }
                }
            }
            for (i = 0; i < t; i++)
            {
                printf ("%ld ", n[i]);
                if (i < (t-1))
                    printf(" ");
            }
            printf ("\n");
        scanf ("%ld", &t);
        }
    return 0;
}*/
