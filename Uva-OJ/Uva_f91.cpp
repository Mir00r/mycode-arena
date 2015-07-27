/*#include <stdio.h>

int main ()
{
    long long int n, result;
    scanf ("%lld", &n);
    while (n != 0)
    {
        if (n == 91)
        {
            printf ("f(91) = 91\n");
        }
        else if (n <= 100)
        {
            result = n + 11;
            printf ("f(%lld) = %lld\n", n, result);
        }
        else if (n > 101)
        {
            result = n - 10;
            printf ("f(%lld) = %lld\n", n, result);
        }
        scanf ("%lld", &n);
    }
    return 0;
}*/



#include <stdio.h>

int main ()
{
    long long int n, result;
    scanf ("%lld", &n);
    while (n != 0)
    {
        if (n <= 100)
        {
            printf ("f(%lld) = 91\n", n);
        }
        /*else if (n <= 100)
        {
            result = n + 11;
            printf ("f(%lld) = %lld\n", n, result);
        }*/
        else if (n > 101)
        {
            result = n - 10;
            printf ("f(%lld) = %lld\n", n, result);
        }
        scanf ("%lld", &n);
    }
    return 0;
}


#include <stdio.h>
unsigned int k,n;
int f91(unsigned int i);

int main()
{
    while(1)
    {
        scanf("%u",&n);
        if(n == 0)
            break;
        k=f91(n);
        printf("f91(%u) = %u\n",n,k);
    }
    return 0;
}
int f91(unsigned int i)
{
    if(i>=101)
        return (i-10);
    else
        return f91(f91(i+11));
}
