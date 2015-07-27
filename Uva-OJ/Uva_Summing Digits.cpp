#include <stdio.h>

/* Recursive function sum of digit */

int sumdigit(int x){
    int s = 0, d, temp, mod;
    temp = 0;
    if(x == 0)
        return (0);

    d = x % 10;
    s += d + sumdigit(x/10);
    if (s > 9){
        mod = s % 10;
        temp += mod + sumdigit(s/10);
        return temp;
    }
    return(s);
}

int main(){
    int sumdigit(int x);
    int n, sum, sum1;

    scanf("%d",&n);
    while (n != 0){
        sum = sumdigit(n);
        sum1 = sumdigit(n);
        if (sum > 10)
            printf ("%d\n", sum);
        else
            printf ("%d\n", sum1);
        scanf ("%d", &n);
    }
    return 0;
}



/*
int main ()
{
    long long int n, mod, temp, X, Y, S;
    scanf ("%lld", &n);
    while (n != 0)
    {
        mod = 0;
        temp = 0;
        X = 0;
        Y = 0;
        S = 0;
        while(n > 0)
        {
            mod = n % 10;
            n = n / 10;
            temp = temp + mod;
                //printf ("%lld\n", temp);

            if (temp > 9)
            {
                X = temp % 10;
                Y = temp / 10;
                S = X + Y;
               // printf ("%lld\n", S);
            }
        }
        if (temp < 10)
        {
            printf ("%lld\n", temp);
        }
        else
        {
            printf ("%lld\n", S);
        }
        scanf ("%lld", &n);
    }
    return 0;
}*/



