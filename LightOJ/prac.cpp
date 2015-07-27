#include<stdio.h>
int main()
{
    int a,t,i, j, count, temp, bin[100000], num, bin_num;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf ("%d",&a);
        num = 0;
        count=0;
        bin_num = 0;
        while(a!=0)
        {
            temp= a % 2;
            bin[num] = temp;
            a = a / 2;
            num++;
            if (temp==1)
                count++;
        }
        for (j = num - 1; j >= 0; j--)
        {
            bin_num = bin[j];
            //printf ("%lld", bin_num);
        }
        printf ("The parity of %d is %d (mod 2).\n", bin_num, count);

        //if ((count%2)==0)
        //  printf("Case %d:Even\n",i);
        // else
            //printf("Case %d:Odd\n",i);
    }
    return 0;

}
