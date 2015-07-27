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




struct node{
    int start, finish;
}arr[105];

bool cmp (node x, node y){
    return x.start < y.start;
}

int main (){
    int tc, i, time, span;
    int day = 0;
    while (scanf ("%d", &tc) != EOF){
        getchar ();
        char assignment [300];
        arr[0].start = arr[0].finish = 600;
        arr[tc + 1].start = arr[tc + 1].finish = 1080;
        for (i = 1; i <= tc; i++){
            gets (assignment);
            int hour1, minute1, hour2, minute2;
            sscanf (assignment, "%d:%d %d:%d", &hour1, &minute1, &hour2, &minute2);
            arr[i].start = hour1 * 60 + minute1;
            arr[i].finish = hour2 * 60 + minute2;
        }
        sort (arr, arr + tc + 2, cmp);
        int max = 0;
        for (i = 1; i <= tc + 1; i++ ){
            span = arr[i].start - arr[i - 1].finish;
            if (span > max){
                max = span;
                time = arr[i - 1].finish;
            }
        }
        if ( max < 60 )
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d minutes.\n",
            ++day, time / 60, time % 60, max);
        else
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d hours and %d minutes.\n",
            ++day, time / 60, time % 60, max / 60, max % 60);
    }

    return 0;
}



/*struct node{
    int start_time;
    int end_time;
}arr[MAX];

bool cmp (node x, node y){
    return x.start_time < y.start_time;
}

int main (){
    int tc, day=1, hour_1, hour_2, min_1, min_2, nap_time, hour, minute, i, j, tmp, maxn, time;
    char assignment[MAX];
    while (scanf ("%d", &tc) == 1){
        getchar ();
        arr[0].start_time = arr[0].end_time = 600;
        arr[tc + 1].start_time = arr[tc + 1].end_time = 1080;
        for (i = 1; i <= tc; i++){
            gets (assignment);
            sscanf (assignment, "%d:%d %d:%d", &hour_1, &min_1, &hour_2, &min_2);
            arr[i].start_time = hour_1 * 60 + min_1;
            arr[i].end_time = hour_2 * 60 + min_2;
        }
        sort (arr, arr + tc + 2, cmp);
        int max = 0;
        for (i = 1; i <= tc + 1; i++){
            nap_time = arr[i].start_time - arr[i - 1].end_time;
            if ( nap_time > max ) {
                max = nap_time;
                time = arr[i - 1].end_time;
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
}*/


/*struct node{
    int start_time, end_time;
}arr[MAX];

bool cmp (node x, node y){
    return x.start_time < y.start_time;
}

int main(){
    int tc, day=1, hour_1, hour_2, min_1, min_2, nap_time, i, j, tmp, maxn, time;
    char assignment[MAX];
    while (scanf ("%d", &tc) == 1){
        getchar();
        for (i = 1; i <= tc; i++){
            gets(assignment);
            sscanf (assignment, "%d:%d %d:%d", &hour_1, &min_1, &hour_2, &min_2);
            arr[i].start_time = hour_1 * 60 + min_1;
            arr[i].end_time = hour_2 * 60 + min_2;
        }
        arr[0].start_time = arr[0].end_time = 24*60;
        arr[tc+1].start_time = arr[tc+1].end_time = 18*60;
        maxn = 0;
        sort (arr, arr + tc + 2, cmp);
        for (i = 1; i <= tc+1; i++){
            nap_time = arr[i].start_time - arr[i-1].end_time;
            if (nap_time > maxn){
                 maxn = nap_time;
                time = arr[i-1].end_time;
            }
        }
        if ( maxn < 60 )
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d minutes.\n",day++, time/60, time%60, maxn);
        else
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d hours and %d minutes.\n",day++, time/60, time%60, maxn/60, maxn%60);

    }
    return 0;
}*/

