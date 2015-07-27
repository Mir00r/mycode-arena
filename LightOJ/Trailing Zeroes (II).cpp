#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define llu unsigned int
#define MAX 20000002

int main(){
    int n, m, i, j, a[10000], temp;
    while (scanf ("%d%d", &n, &m) == 2){
        temp = n;
        int count = 0;
        while(temp > 1){
            int mod = temp % m;
            a[count] = mod;
            temp /= m;
            count++;
        }
        for (i = count -1; i >= 0; i--)
            printf ("%d\n", a[i]);
    }
    return 0;
}

/*long long int fact(long long int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main ()
{
    long long int n, r, p, q, result, power;
    int i, t;
    scanf ("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf ("%lld%lld%lld%lld", &n, &r, &p, &q);
        power = pow (p, q);
        result = fact(n) / (fact(r)*fact(n-r));
        printf ("Case %d: %lld\n", i, result*power);
    }
    return 0;
}*/
