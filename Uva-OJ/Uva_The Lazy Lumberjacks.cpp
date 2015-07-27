#include <stdio.h>
int main()
{
    long long int n, a, b, c, k, j = 0;
    scanf("%lld", &n);
    while(n--)
    {
        j++;
        scanf("%lld %lld %lld", &a, &b, &c);

        if(a > b)
        {
            if(a > c)
            {
                k = c;
                c = a;
                a = k;
            }
        }
        else
        {
            if(b > c)
            {
                k = c;
                c = b;
                b = k;
            }
        }
        if(c >= (a + b))
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }
    return 0;
}
