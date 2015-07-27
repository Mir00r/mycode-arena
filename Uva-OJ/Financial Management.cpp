#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <clocale>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999

int main(){
    int tc, cs=1, i;
    double close_balance, mean, sum, tmp;
    scanf ("%d", &tc);
    setlocale(LC_ALL, "en_US.UTF-8");
    while (tc--){
        sum = 0.0;
        for (i = 0; i < 12; i++){
            scanf ("%lf",  &close_balance);
            sum += close_balance;
        }
        mean = sum / 12.0;
        printf ("%d $%'.2lf\n", cs++, mean);
       // printf("%d $%.2lf\n", cs++, mean);
    }
    return 0;
}
