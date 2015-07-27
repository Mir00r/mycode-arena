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
    int s_h, s_m, e_h, e_m, i, j, diff, hour, min,  cnt, tmp, ans;
    scanf ("%d:%d", &s_h, &s_m);
    scanf ("%d:%d", &e_h, &e_m);
    diff = (s_h*60+s_m) - (e_h*60+e_m);
    if (diff < 0) diff += (24*60);
    hour = diff / 60; min = diff % 60;
    printf ("%02d:%02d\n", hour, min);
    return 0;
}


