#include<stdio.h>
#include<string.h>
#include <math.h>

int main()
{
    int i, j, sum1, flag;
    char name1[53];
    while(gets(name1))
    {
        sum1 = 0;
        flag = 0;
        for(i = 0; i < strlen(name1); i++)
        {
            if(name1[i] >= 'a' && name1[i] <= 'z')
            {
                sum1 += name1[i]-'a'+1;
            }
            else if(name1[i] >= 'A' && name1[i] <= 'Z')
            {
                sum1 += name1[i]-'A'+27;
            }
        }
        //printf ("sum1 = %d\n", sum1);
        for (j = 2; j <= sqrt(sum1); j++)
        {
            if (sum1 % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("It is not a prime word.\n");
        }
        else if (flag == 0)
        {
            printf("It is a prime word.\n");
        }
    }
    return 0;
}
