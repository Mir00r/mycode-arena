#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 25

int fact (int a, int b){
    if (a <= b) return a;
    else
        return a * fact(a - b, b);
}

int main(){
    int n, len, ans, i, j;
    char k[MAX];
    while (scanf ("%d", &n) == 1){

        scanf ("%s", k);
        len = strlen (k);

        ans = fact(n, len);
        printf ("%d\n", ans);
    }
    return 0;
}
