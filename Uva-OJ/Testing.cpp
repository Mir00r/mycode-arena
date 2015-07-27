#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define MAX 100006



int main()
{
    int i,c=1;
    for(i=2;i<=2100;i++)
    {
        if((i%2==0)||(i%3==0)||(i%5==0))
            c++;
        if(c==1500)
            break;
    }
    printf("The 1500'th ugly number is %d.",i);
    return 0;
}





//int main(){
//    LL n, badge[MAX], i, j, tot, sum , tmp, ans;
//
//    scanf ("%I64d ", &n);
//    for (i = 0; i < n; i++){
//        scanf ("%d", &tmp);
//        badge[tmp]++;
//    }
//
//    tot = sum = ans = 0;
//
//    for (i = 0; i < n; i++){
//        while (badge[i] > 1){
//            badge[i+1]++;
//            badge[i]--;
//            ans++;
//        }
//    }
//
//    printf ("%I64d\n", ans);
//
//    return 0;
//}
