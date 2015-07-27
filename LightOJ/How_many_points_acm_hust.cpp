#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

#define sc scanf
#define pf printf
#define l long
#define ll long long


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

#define sc scanf
#define pf printf
#define l long
#define ll long long

ll Ax, Ay, Bx, By, dx, dy;
/*long long ABS (long long n){
       return n> 0? n:-n;
 }*/

ll GCD(ll x, ll y){
    if(y == 0)
        return x;
    else
        return GCD(y, x%y);
}

int main(){
    int i, t;
    scanf ("%d",&t);
    for (i = 1; i <= t; i++){
        scanf ("%lld %lld %lld %lld",&Ax,&Ay,&Bx,&By);
        printf ("Case %d: %lld\n", i, GCD(abs(Ax-Bx),abs(Ay-By))+1);
    }
    return 0;
}



/*ll int GCD(ll int x, ll int y){
    //x = x % y;
    if (x == 0)
        return y;
    //y = y % x;
    else
        return GCD(y , x%y);
    /*if (x % y == 0)
        return y;
    else
        return GCD(x, x%y);*/
//}
/*iNnt GCD(int a, int b){
    if(a > b){
        if(a % b == 0){
            return b;
        }
        else{
            b = a % b;
            GCD(a, b);
        }
    }
    else{
        if(b % a == 0){
            return a;
        }
        else{
            a = b % a;
            GCD(a, b);
        }
    }
}*/

//ll int count_point(ll int Ax, ll int Ay, ll int Bx, ll int By){
    /*if (Ax == Bx)
        return abs(Ay-By) + 1;
    else if (Ay == By)
        return abs(Ax-Bx) + 1;*/
    //ll int dx = abs(Ax - Bx);
    //ll int dy = abs(Ay - By);
    //return GCD(dx, dy) + 1;
//}

/*int main(){
    ll int ax, ay, bx, by;
    int t, i;
    sc("%d", &t);
    for (i = 1; i <= t; i++){
        sc("%lld%lld%lld%lld", &ax, &ay, &bx, &by);
        //pf ("Case %d: %lld\n", i, count_point(ax, ay, bx, by));
        pf("Case %d: %lld\n", i, GCD(abs(ax-bx) , abs(ay-by))+1);
    }
    return 0;
}*/
