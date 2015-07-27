#include <stdio.h>
#include <string.h>
char str[1001];

int main ()
{
    int t, i, j, len, sum;
    scanf ("%d", &t);
    getchar();
    for (i = 1; i <= t; i++)
    {
        sum = 0;
        gets(str);
        len = strlen(str);
        for (j = 1; j <= len; j++)
        {
            if (str[j] == 'M')
                sum += 1;
            else if (str[j] == 'F')
                sum -= 1;
        }
        if (sum == 0 && len != 2)
            printf ("LOOP\n");
        else
            printf ("NO LOOP\n");
    }
    return 0;
}



/*#include <stdio.h>
#include <string.h>
char str[1000];
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        int i,sum=0;
        gets (str);
        int len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i] == 'M')
                sum += 1;
            if(str[i] == 'F')
                sum -= 1;
        }
        if( sum == 0 && len != 2)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;
}*/
