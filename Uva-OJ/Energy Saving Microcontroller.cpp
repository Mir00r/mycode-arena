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

/*int main(){
    int tc, cs=1, i, j, maxn, n, k, p, micro_sec, inactive, inst_ignore;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d%d", &n, &p, &k);
        maxn = inactive = inst_ignore = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &micro_sec);
            if (micro_sec < maxn) inst_ignore++;
            else if (micro_sec > maxn+p){
                inactive++;
                maxn = micro_sec+k;
            }
            if (micro_sec > maxn) maxn = micro_sec;
        }
        printf ("Case %d: %d %d\n", cs++, inactive, inst_ignore);
    }
    return 0;
}*/

struct node{
    int start;
    int finish;
}arr[MAX];

bool cmp (node x, node y){
    return x.start < y.start;
}

int main (){
    int tc, day=1, hour, minute, i, j, nap_time, tmp, maxn, time;
    while (scanf ("%d", &tc) == 1){
        getchar ();
        char assignment [300];
        arr[0].start = arr[0].finish = 600;
        arr[tc + 1].start = arr[tc + 1].finish = 1080;
        for (i = 1; i <= tc; i++){
            gets (assignment);
            int hour_1, miin_1, hour_2, min_2;
            sscanf (assignment, "%d:%d %d:%d", &hour_1, &miin_1, &hour_2, &min_2);
            arr[i].start = hour_1 * 60 + miin_1;
            arr[i].finish = hour_2 * 60 + min_2;
        }
        sort (arr, arr + tc + 2, cmp);
        int max = 0;
        for (i = 1; i <= tc + 1; i++){
            nap_time = arr[i].start - arr[i - 1].finish;
            if (nap_time > max){
                max = nap_time;
                time = arr[i - 1].finish;
            }
        }
        hour = time / 60;
        minute = time % 60;
        if (max < 60)
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d minutes.\n", day++, hour, minute, max);
        else
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d hours and %d minutes.\n", day++, hour, minute, max / 60, max % 60);

    }

    return 0;
}
