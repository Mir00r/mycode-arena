#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define pb push_back
#define MAX 100005


int main(){
    int n, ans, i, j, tmp;
    while (scanf ("%d", &n) == 1){
        if (n == 1) puts ("01");
        else if (n == 2) puts ("11 01");
        else if (n == 3) puts ("11 01 60");
        else if (n == 4) puts ("11 01 60 80");
        else puts ("Glupenky Pierre");
    }
    return 0;
}
