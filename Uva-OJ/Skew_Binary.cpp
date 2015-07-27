/*#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    long int n, i, j, k, len, temp, sum, num, power;
    char str[10000];
    while (gets(str))
    {
        sum = 0;
        len = strlen(str);
        if (str[0]-48 == 0)
            break;
        for (i = 0; i < len; i++)
        {
            num = str[i]-48;
            //power = len - i;
            sum += num * (pow (2, len-i) - 1);
            //sum += temp;
        }
        printf ("%ld\n", sum);
    }
    return 0;
}*/


#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
    long int n, i, j, k, len, temp, sum, num, power;
    char str[10000];
    while (scanf("%d", &n) == 1)
    {
        sum = 0;
        len = log10(n)+1;
        //printf ("len = %d\n", len);
        if (n == 0)
            break;
        for (i = 0; i < len; i++)
        {
            num = n;
            printf ("num = %d\n", num);
            sum += num * (pow (2, len-i) - 1);
            //sum += temp;
        }
        printf ("%ld\n", sum);
    }
    return 0;
}

