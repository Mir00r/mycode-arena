/*#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) == 2)
    {
       printf("%d\n", a^b);
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    int i, j, temp1, sum, carry, temp2, dec_num1, dec_num2, num1, num2, mod1, mod2;
    int bin_num1[100000], bin_num2[100000], result[100000];
    while(scanf ("%d%d", &dec_num1, &dec_num2) == 2)
    {
        num1 = num2 = carry = 0;
        while(dec_num1 > 0)
        {
            mod1 = dec_num1 % 2;
            bin_num1[num1] = mod1;
            dec_num1 /= 2;
            num1++;
        }
        for (i = 4; i >= 0; i--)
        {
            temp1 = bin_num1[i];
            //printf ("%d", temp1);
        }
        //printf ("\n");
        while(dec_num2 > 0)
        {
            mod2 = dec_num2 % 2;
            bin_num2[num2] = mod2;
            dec_num2 /= 2;
            num2++;
        }
        for (i = 4; i >= 0; i--)
        {
            temp2 = bin_num2[i];
            //printf ("%d", temp2);
        }
        j = 4;
        for(i = 4; i >= 0; i--)
        {
            if(bin_num1[i] == bin_num2[i] == 1)
            {
                sum = 0;
                carry = 1;
            }
            else
            {
                if(bin_num1[i] == bin_num2[i] == 0)
                {
                    sum = 0;
                    carry = 0;
                }
                else
                {
                    sum = 1;
                    carry = 0;
                }
            }
            if(sum == carry == 1)
            {
                sum = 0;
                carry = 1;
            }
            else
            {
                if(sum == carry == 0)
                {
                    sum = 0;
                    carry = 0;
                }
                else
                {
                    sum = 1;
                    carry = 0;
                }
            }
            result[i] = sum;
            j--;
        }
        for(j = 4; j >= 0; j--)
        {
            printf("%d", result[j]);
        }
    }
    return 0;
}
