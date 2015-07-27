#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100000+10
#define row 10000
#define col 30

/*int main(){
    int tc, low[MAX], high[MAX], i, j, cnt, quary_price, num_quary, database, car_name;
    char car_brand[row][col];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &database);
        for (i = 0; i < database; i++) scanf ("%s%d%d", car_brand[i], &low[i], &high[i]);
        scanf ("%d", &num_quary);
        while (num_quary--){
            scanf ("%d", &quary_price);
            cnt = 0;
            for (i = 0; i < database; i++){
                if (low[i] <= quary_price && quary_price <= high[i])
                    cnt++, car_name = i;
                    //car_name = i;
                    if(cnt > 1) break;

                //if(cnt > 1) break;
            }
            if (cnt == 1) printf ("%s\n", car_brand[car_name]);
            else printf ("UNDETERMINED\n");
        }
        //if (tc) printf ("");
    }
    return 0;
}*/




int main(){
    int tc;
    scanf("%d", &tc);
    while(tc--){
        int database, quary, price, i, cnt, car_name;
        int low[10000], high[10000];
        char name[10000][25];
        scanf("%d", &database);
        for(i = 0; i < database; i++)
            scanf("%s %d %d", name[i], &low[i], &high[i]);
        scanf("%d", &quary);
        while(quary--){
            scanf("%d", &price);
            cnt = 0;
            for(i = 0; i < database; i++){
                if(low[i] <= price && price <= high[i])
                    cnt++, car_name = i;
                if(cnt > 1) break;
            }
            if(cnt == 1)
                puts(name[car_name]);
            else
                puts("UNDETERMINED");
        }
        if(tc)
            puts("");
    }
    return 0;
}
