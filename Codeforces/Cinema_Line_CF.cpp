#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999999


int main(){
    int tewenty_five=0, fifty=0, price, n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &price);
        if(price == 25)tewenty_five++;
        else if(price == 50){
            tewenty_five--; fifty++;
        }
        else{
            if(fifty){
                fifty--; tewenty_five--;
            }
            else tewenty_five -= 3;
        }
        if(tewenty_five < 0 || fifty < 0)break;
    }
    if(i == n)printf("YES");
    else printf("NO");
    return 0;
}


/*int main(){
    int n, price, tewenty_five, fifty, hundrade, i, j, cnt, tmp, ans;
    while (scanf ("%d", &n) == 1){
        tewenty_five = fifty = hundrade = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &price);
            if (price == 25) tewenty_five++;
            else if (price == 50){
                fifty++;
                tewenty_five--;
                //fifty++;
            }
            else{
                if (fifty == 0){
                    fifty--; tewenty_five--;
                }
                else tewenty_five -= 3;
            }
            if (tewenty_five < 0 || fifty < 0) break;
        }
        if (i == n) printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}*/


/*int main(){
    int n, price, tewenty_five, fifty, hundrade, i, j, cnt, tmp, ans;
    scanf ("%d", &n);
        tewenty_five = fifty = hundrade = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &price);
            if (price == 25) tewenty_five++;
            else if (price == 50){
                fifty++;
                tewenty_five--;
                //fifty++;
            }
            else{
                if (fifty == 0){
                    fifty--; tewenty_five--;
                }
                else tewenty_five -= 3;
            }
            if (tewenty_five < 0 || fifty < 0) break;
        }
        if (i == n) printf ("YES\n");
        else printf ("NO\n");
    return 0;
}*/



