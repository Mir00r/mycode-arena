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

int main(){
    int hour_1, min_1, hour_2, min_2, sleep_time, w1, w2;
    while (scanf ("%d%d%d%d", &hour_1, &min_1, &hour_2, &min_2) == 4){
        if (hour_1 == 0 && min_1 == 0 && hour_2 == 0 && min_2 == 0) break;
        w1 = (hour_1*60) + min_1;
        w2 = (hour_2*60) + min_2;
        if (w2 < w1) w2 = w2 + 24*60;
        sleep_time = w2-w1;
        printf ("%d\n", sleep_time);
    }
    return 0;
}
