#include <stdio.h>
#include <math.h>

int main (){
    long long int t, i, x, y, z, a, b, m, n, o;
    scanf ("%lld", &t);
    for (i = 0; i < t; i++){
        scanf ("%lld%lld%lld", &x, &y, &z);
        if(x > y && x > z){
            m = x;
            n = y;
            o = z;
        }
        else if(y > x && y > z){
            m = y;
            n = x;
            o = z;
        }
        else{
            m = z;
            n = x;
            o = y;
        }
        a = pow (m, 2);
        b = pow (n, 2) + pow (o, 2);
        if (a == b)
            printf ("Case %d: yes\n", i+1);
        else
            printf ("Case %d: no\n", i+1);
    }
    return 0;
}
