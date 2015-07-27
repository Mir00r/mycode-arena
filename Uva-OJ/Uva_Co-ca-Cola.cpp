/*#include <stdio.h>

int result;

int getcount(int temp)
{
    int sum = 0;
    int count = 0;
    while (temp != 0)
        {
            temp = temp - 3;
            count++;
            if (count >= 3)
            {
                temp = temp + count;
                sum= sum + count;
                count = 0;
            }
        }
        return (sum+count);
}

int main()
{
    int  n, temp, rem;
    scanf ("%d", &n);
    if (n >= 1 && n <= 100)
    {
        while(1)
        {
            if (n == 0)
            break;

            temp = n;
            if ((temp % 3) == 0)
            {
                result = getcount(temp);
                printf("%d\n", result);
            }
            else
            {
                if(temp == 1)
                    printf("0\n");
                else if (temp == 2)
                    printf("1\n");
                else
                {
                    rem = temp % 3;
                    temp = temp - rem;
                    result = getcount(temp) + rem;
                    printf("%d\n",result);
                }
            }
        scanf ("%d", &n);
        }
    }
    return 0;
}*/
#include <stdio.h>

int main()
{
    int n, coke;
    scanf("%d", &n);
    while(n != 0)
    {
        coke = 0;
        while(n >= 3)
        {
            n = n - 3;
            coke++;
            n += 1;
        }
        if(n == 2)
            printf("%d\n", coke+1);
        else
            printf("%d\n", coke);
        scanf("%d", &n);
    }
    return 0;
}

