/*#include <stdio.h>
int main()
{
    int t, i, N, j, k, flag=0;
    long long int matrix [105][105];
    scanf ("%d", &t);
    for (k = 1; k <= t; k++)
    {
        char str[10];
        scanf ("%s %s %d", str, str, &N);
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < N; j++)
            {
                scanf("%lld", &matrix [i][j]);
                if (matrix [i][j] < 0)
                    flag = 1;
            }
        }
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(matrix [i][j] != matrix [N-1-i][N-1-j])
                    flag = 1;
            }
        }
        if(flag == 0)
            printf ("Test #%d: Symmetric.\n", k);
        else
            printf ("Tast #%d: Non-symmetric.\n", k);
    }
    return 0;
}*/


#include <stdio.h>

int main() {
    int t, n, Case = 0;
    long long map[101][101];
    char str[3];
    scanf("%d", &t);
    while(t--) {
        scanf("%s %s %d", str, str, &n);
        int flag = 0, i, j;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                scanf("%lld", &map[i][j]);
                if(map[i][j] < 0)
                    flag = 1;
            }
        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n-i; j++)
            {
                if(map[i][j] != map[n-1-i][n-1-j])
                {
                    flag = 1;
                    goto end;
                }
            }
        }
        end:
        printf("Test #%d: ", ++Case);
        if(flag)
            puts("Non-symmetric.");
        else
            puts("Symmetric.");
    }
    return 0;
}


/*#include<stdio.h>

int main()
{
    int a[100][100],i,j,n,z=0, t, k;
    scanf ("%d", &t);
    for (k = 1; k <= t; k++)
    {
    printf("Enter type of the matrix:");
    scanf("%d",&n);
    printf("Enter values for %d*%d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i][j]!=a[n-1-i][n-1-j])
            z=1;
        }
    }
    if(z==0)
        printf("The given matrix is symmetric");
    else
        printf("The given matrix is not symmetric");
    }
    return 0;
}*/
