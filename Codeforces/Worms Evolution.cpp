#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 1005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


int n, len[MAX];

int main(){
    int i, j, k;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) scanf  ("%d", &len[i]);

    //sort (len, len+n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            for (k = j+1; k < n; k++)
                if (len[i] == len[j] + len[k]){
                    //printf ("%d %d %d\n", len[i], len[k], len[j]);
                    printf ("%d %d %d\n", i+1, k+1, j+1);
                    return 0;
                }
        }
    }
    puts ("-1");
    return 0;
}
