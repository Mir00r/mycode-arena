#include <stdio.h>
//#include <stdlib.h>

int a[3020];
int main()
{
    int n, sum, i, temp;
    int b[3020] = {0};
    while (scanf ("%d", &n) == 1)
    {
        temp = 0;
        scanf ("%d", &a[1]);
        for (i = 2; i <= n; i++)
        {
            scanf ("%d", &a[i]);
            sum = a[i] - a[i - 1];
            if (sum < 0)
                sum *= -1;
            b[sum] = 1;
        }
        for (i = 1; i <= n - 1; i++)
            if (b[i] != 1)
            {
                temp = 1;
                break;
            }
        if (temp == 0)
            printf ("Jolly\n");
        else
            printf ("Not jolly\n");
    }
    return 0;
}
