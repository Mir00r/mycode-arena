#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 1000000+10

int pole_len, ants_pos, num_ants;
int erliest, latest;

/*int find_maxn (int x){
    int erliest = 0;
    erliest = max (erliest, max (pole_len-x, x));
    return erliest;
}

int find_minx (int x){
    int latest = 0;
    latest = max (latest, min (pole_len-x, x));
    return latest;
}*/

int main(){
    int tc, cs=1, i, j, tmp, cnt;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d%d", &pole_len, &num_ants);
        erliest = latest = 0;
        for (i = 0; i < num_ants; i++){
            scanf ("%d", &ants_pos);
            //erliest = find_minx(ants_pos);
            //latest = find_maxn(ants_pos);
            erliest = max (erliest, min (pole_len-ants_pos, ants_pos));
            latest = max (latest, max (pole_len-ants_pos, ants_pos));
        }
        printf ("%d %d\n", erliest, latest);
    }
    return 0;
}
