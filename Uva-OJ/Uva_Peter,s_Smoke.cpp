#include <stdio.h>

int main (){
    long long int n, k, div, mod, cnt;
    while (scanf ("%lld%lld", &n, &k) == 2){

        div = 0;
        mod = 0;
        cnt = 0;

        if (k > 1)
        {
            cnt = n;
            while (n > k - 1)
            {
                div = n / k;
                mod = n % k;
                cnt += div;
                n = div + mod;
            }
            printf("%lld\n", cnt);
        }

    }
    return 0;
}




/*
int main(){
    int s,b,d=0,c=0,t=0;
    scanf("%d %d",&s,&b);
    //c=c+s;
    c = s;
    while(s >= b){
         s = s / b;
         d = s % b;
         //s = s / b;
        // t = t + s;
         c = c + t;
         s = s + d;
         //t = 0;
    }
    printf("%d", c);
    return 0;
}
*/
