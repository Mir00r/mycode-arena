#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI __int64
#define ULL unsigned long long
#define MAX 9999

int main(){
    int s_h, s_m, e_h, e_m, i, j, hour, min,  cnt, tmp, ans;
    scanf ("%d:%d", &s_h, &s_m);
    scanf ("%d:%d", &e_h, &e_m);
    //s_h = 23 - s_h + (s_m == 0);
    //e_h = 23 - e_h + (e_m == 0);
    if (s_h == 0 && s_m == 0){
        s_h += 24;
        //s_m += 60;
        hour = s_h - e_h;
        min = s_m - e_m;
    }
    else if (e_h == 0 && e_m == 0){
        //e_h += 24;
        hour = s_h - e_h;
        min = s_m - e_m;
    }
    else if ((s_h == 0 && s_m == 0) && (e_h == 0 && e_m == 0)){
        //s_h += 24;
        //e_h += 24;
        hour = s_h - e_h;
        min = s_m - e_m;
    }
    printf ("%02d:%02d\n", hour, min);
    return 0;
}





/*int main(){
    int t, i, hour, min, temp;
    scanf ("%d", &t);
    for (i = 0; i < t; i++){
        scanf ("%d:%d", &hour, &min);
        hour = 11 - hour + (min == 0);
        //printf ("hour = %d\n", hour);
        if (hour <= 0)
            hour += 12;
        if (hour != 0)
            min = 60 - min;
        if (min == 60)
            min = 0;
        printf ("%02d:%02d\n", hour, min);
    }
    return 0;
}
*/
