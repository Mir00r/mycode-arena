#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 60


int main(){
    char str[MAX], ans;
    int alpa[MAX];
    int i, j, len, tmp, cnt, check, a, b, maxn;
    scanf ("%s", str);
    memset (alpa, 0, sizeof (alpa));
    maxn = 0;
    len = strlen (str);
    for (i = 0; i < len; i++){
        tmp = str[i] - 'a';
        printf ("tmp = %d\n", tmp);
        alpa[tmp]++;
        //printf ("Apla = %d\n", alpa[i]);
    }
    for (i = 0; i < 26; i++){
        if (alpa[i] > maxn){
            maxn = alpa[i];
            printf ("MAX = %d\n", maxn);
            ans = i + 'a';
        }
    }
    printf ("%c\n", ans);
    return 0;
}
