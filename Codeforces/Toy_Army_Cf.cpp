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
    int n, kill_sol;
    while (scanf ("%d", &n) == 1){
        kill_sol = n/2 * 3;
        printf ("%d\n", kill_sol);
    }
    return 0;
}

