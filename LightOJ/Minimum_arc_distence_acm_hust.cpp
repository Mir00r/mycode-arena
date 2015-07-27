/*#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
    int ox, oy, ax, ay, bx, by, t, i;
    double res, alpha, oa, ob, ab, c, length;
    scanf ("%d", &t);
    for (i = 1; i <= t; i++){
        scanf ("%d%d%d%%d%d", &ox, &oy, &ax, &ay, &bx, &by);
        oa = sqrt((ox-ax)*(ox-ax) + (oy-ay)*(oy-ay));
        printf ("%lf\n\n", oa);
        //ob = sqrt((ox-bx)*(ox-bx) + (oy-by)*(oy-by));
        ab = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
        printf ("%lf\n\n", ab);
        /*c = 2*oa*3.1415926535898;
        alpha = acos((ab*ab-oa*oa-oa*oa) / (-2*oa*oa));
        length = alpha * oa;
        res = min (length, c-1);*/
        /*res = 2*(ob*ob) - (ab*ab);
        res /= 2*ob*ob;
        alpha = acos(res);
        res = alpha * ob;
        printf ("Case %d: %lf\n", i, res);
    }
    return 0;
}*/



#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
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

int main(){
    int i, t, Ox, Oy, Ax, Ay, Bx, By;
    double ab, ob, oa, ans, alpha;
    scanf ("%d", &t);
    for(i = 1; i <= t; i++){
        scanf ("%d%d%d%d%d%d", &Ox, &Oy, &Ax, &Ay, &Bx, &By);
        ab = sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
        //AB = sqrt(AB);
        //printf ("AB = %lf\n\n", AB);
        ob = sqrt((Ox-Bx)*(Ox-Bx)+(Oy-By)*(Oy-By));
        //OB = sqrt(OB);
        //printf ("OB = %lf\n\n", OB);
        //oa = sqrt((ox-ax)*(ox-ax) + (oy-ay)*(oy-ay));
        //printf ("%lf\n\n", oa);
        ans = 2*ob*ob - ab*ab;
        ans /= (2*ob*ob);
        alpha = acos (ans) ;
        ans = alpha * ob ;
        printf("Case %d: %lf\n",i,ans);
    }
    return 0;
}

