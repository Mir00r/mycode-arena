#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define MAX 5


int main(){
    int x, y, a, b, i, j, cnt, tmp, ans, arr[MAX];
    while (scanf ("%d%d%d%d", &x, &y, &a, &b) == 4){
        cnt = 0;
        for (i = a; i <= x; i++)
            for (j = b; j <= y; j++)
                if (i > j) cnt++;
                printf ("%d\n", cnt);
        for (i = a; i <= x; i++){
            for (j = b; j <= y; j++){
                if (i > j) printf ("%d %d\n", i, j);
            }
        }
    }
    return 0;
}


		if((k[1][0]-k[0][0])%4==0 && (k[1][1]-k[0][1])%4==0)


/*int main(){
    long nr=0,x,y,a,b,i,j;
    scanf("%ld %ld %ld %ld",&x,&y,&a,&b);
    for (i = a; i <= x; i++)
        for (j = b; j <= y; j++)
            if (i > j) nr++;
            printf("%ld\n",nr);
    for (i = a; i <= x; i++)
        for (j = b; j <= y; j++)
            if (i > j) printf("%ld %ld\n",i,j);
    return 0;
}
*/
