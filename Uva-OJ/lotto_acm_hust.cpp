#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 99

int lott_arr[MAX];
int p, i, j, k, l, n, m, o;
int res = 0;
int lott_rec(int i, int tot){
    if (tot == 6){
        res++;
        return;
    }
    if (i == p)
        return;
    else
        return lott_rec(i+1, tot+1);
    return lott_rec (i+1, tot);
}
int main(){
    int count = 0;
    while(scanf ("%d", &p) == 1){
        if (p == 0) break;
        if(count != 0)
            printf("\n");
        count++;
        for (i = 0; i < p; i++)
            scanf ("%d", &lott_arr[i]);
        for (i = 0; i < p; i++){
            int ans = lott_rec
            /*for (j = i+1; j < p; j++){
                for (k = j+1; k < p; k++){
                    for (l = k+1; l < p; l++){
                        for (m = l+1; m <p; m++){
                            for (n = m+1; n < p; n++){
                                printf ("%d %d %d %d %d %d\n", lott_arr[i], lott_arr[j], lott_arr[k], lott_arr[l], lott_arr[m], lott_arr[n]);
                            }
                        }
                    }
                }
            }*/
        }
       // printf("\n");
    }
    return 0;
}
