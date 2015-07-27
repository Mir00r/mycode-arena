#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999

/*int main(){
    ll n, ans;
    while (scanf ("%lld", &n) == 1){
        ans = (n*n*(n+1)*(n+1)) / 4;
        printf ("%lld\n", ans);
    }
    return 0;
}*/

#define Pi 3.1415926535898
#define ds 0.0000005
#define M 40

/*double a = 0,b = 0;

double f(double si) {
   return sqrt(1-((a*a-b*b)/(a*a))*sin(si)*sin(si));
}

long Sq(int k) {
    long m = 1;
    for(; k > 0; k--)
      m *= 2;
    return m;
}

double rom(double a,double b,double e) {
    double T[M],S[M],C[M],R[M],y;
    int k = 0,i;
    double h = (b-a) * 1.0;
    T[1] = h/2.0 * (f(a) + f(b));
    h /= 2.0;
    for(k = 1; k <= M; k++,h/=2) {
        y=0;
        for(i=1;i<=Sq(k-1);i++)
        {
            y+=f(a+(2*i-1)*h);
        }

        T[Sq(k)]=T[Sq(k-1)]/2.0+h*y;

        S[Sq(k-1)]=4.0/3*T[Sq(k)]-1.0/3*T[Sq(k-1)];

        if(k-2>=0)
            C[Sq(k-2)]=16.0/15*S[Sq(k-1)]-1.0/15*S[Sq(k-2)];

        if(k-3>=0)
            R[Sq(k-3)]=64.0/63*C[Sq(k-2)]-1.0/63*C[Sq(k-3)];

        if(k-4>=0){
           if(fabs(R[Sq(k-3)]-R[Sq(k-4)])<e)
              break;}
    }
    return R[Sq(k-3)];

}

int main() {
    int t = 0,k = 0;
    double ans = 0;
    scanf("%d",&t);
    for(k = 1;k<=t;k++){
        scanf("%lf %lf",&b,&a);
        ans = 4*a*rom(Pi/2,0,ds);
        printf("Case %d: %.6lf\n",k,fabs(ans));
    }
    return 0;
}
*/


