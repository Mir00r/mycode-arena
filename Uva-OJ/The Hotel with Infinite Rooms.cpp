#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 9999

l find_gp_size(l start_gp, l next_gp, l d){
    if (start_gp >= d) return next_gp;
    return find_gp_size(start_gp + next_gp, ++next_gp, d);
}

int main(){
    l S, day, ans, cnt, tmp;
    while (scanf ("%ld%ld", &S, &day) == 2){
        ans = find_gp_size(S, S, day);
        printf ("%ld\n", ans);
    }
    return 0;
}


// Another Way

/*int main(){
    int S, day, i, ans, tmp;
    while (scanf ("%d%d", &S, &day) == 2){
        ans = 0;
        for (i = S; ; i++){
            ans += i;
           // printf ("ANS = %d\n", ans);
            if (ans > day || ans == day){
                printf ("%d\n", i);
                break;
            }
        }
    }
    return 0;
}*/
