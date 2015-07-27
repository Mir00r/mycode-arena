#include <stdio.h>
#include <math.h>

int main(){
    int i, test;
    double AB, BC, CA, AD, DE, ratio;
    double pi=2*acos(0.0);
    scanf ("%d", &test);
    for(i = 1; i <= test; i++){
        scanf ("%lf%lf%lf%lf", &AB, &CA, &BC, &ratio);
        ratio = ratio / (ratio + 1);
        AD = AB * sqrt(ratio);
        printf("Case %d: %lf\n", i, AD);
    }
    return 0;
}
