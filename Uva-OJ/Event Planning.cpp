#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999

int main(){
    int parson, budget, hotel, week, price, bed, cost, i, j, tmp, tot;
    while (scanf ("%d%d%d%d", &parson, &budget, &hotel, &week) == 4){
        cost = budget+1;
        while (hotel--){
            //cost = budget+1;
            scanf ("%d", &price);
            //tot = parson * price;
            for (i = 1; i <= week; i++){
                scanf ("%d", &bed);
                //tot = parson * price;
                if (bed >= parson){
                    tot = parson * price;
                    if (cost > tot) cost = tot;
                }
            }
        }
        if (cost < budget) printf ("%d\n", cost);
        else printf ("stay home\n");
    }
    return 0;
}
