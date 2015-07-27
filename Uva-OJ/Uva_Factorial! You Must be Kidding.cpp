#include<stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n) == 1)
    {
        if(n < 0 && n % 2 == 0)
            printf("Underflow!\n");
        else if(n < 0 && n % 2 !=0)
            printf("Overflow!\n");
        else if(n == 0 || n <= 7)
            printf("Underflow!\n");
        else if(n == 8)
            printf("40320\n");
        else if(n == 9)
            printf("362880\n");
        else if(n == 10)
            printf("3628800\n");
        else if(n == 11)
            printf("39916800\n");
        else if(n == 12)
            printf("479001600\n");
        else if(n == 13)
            printf("6227020800\n");
        else if(n > 13)
            printf("Overflow!\n");
    }
    return 0;
}



/*#include <stdio.h>

long long factorial(int);

int main()
{
    long long int num;
    long long int f;
    while (scanf("%lld", &num) == 1)
    {
        f = factorial(num);
        if (f <= 10000)
            printf("Underflow!\n");
        else if (f > 6227020800)
            printf("Overflow!\n");
        else
            printf("%lld\n", f);
    }
    return 0;
}

long long int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * factorial(n-1));
}



#include <stdio.h>
int main()
{
    long long int input,res,start,i;
    while (scanf("%lld",&input)==1)
    {
        if(input<=7&&input>=0)printf("Underflow!\n");
        else if(input<0)
        {
            input=-input;
            if(input%2==1)printf("Overflow!\n");
            else if(input%2==0)printf("Underflow!\n");
        }
        else if(input>7&&input<=13){
            res=40320;
            for(i=9;i<=input;i++)res=res*i;
            printf("%lld\n",res);
        }
        else printf("Overflow!\n");
    }
    return 0;
}*/
