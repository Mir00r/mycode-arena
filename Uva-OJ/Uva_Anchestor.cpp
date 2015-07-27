#include<stdio.h>

long long int gen[128];
int main()
{
    long long int i, n;
    scanf ("%lld", &n);
    gen[0] = 1;
    gen[1] = 1;
    while (n != 0)
    {
        for (i = 2; i < 81; i++)
        {
            gen[i] = gen[i - 1] + gen[i - 2];
        }
        printf ("%lld\n", gen[n]);
        scanf ("%lld", &n);
    }
    return 0;
}
