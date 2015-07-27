#include<stdio.h>

int main()
{
    int F[40] = {};
    int i, n, t;
    F[0] = 1, F[1] = 2;
    for(i = 2; i < 40; i++)
        F[i] = F[i-1] + F[i-2];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d = ", n);
        int cheeck = 0;
        for(i = 39; i >=0; i--)
        {
            if(n / F[i] == 1){
                printf("1");
                n %= F[i];
                cheeck = 1;
            }
            else if(cheeck == 1)
                printf("0");
        }
        printf(" (fib)\n");
    }
    return 0;
}

