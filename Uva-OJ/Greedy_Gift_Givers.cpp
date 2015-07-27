#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

using  namespace std;

#define LLI long long int
#define MAX 20
#define row 60
#define col 60
#define memo(y) memset(y ,0 ,sizeof(y))

map <string, int> mp;
    char name[row][col], giver[MAX], manush[MAX];
int n, taka, people;

void name_nilam (){
    int i;
    for (i = 0; i < n; i++){
        scanf ("%s", name[i]);
        mp[name[i]] = 0;
    }
}

void calcu (){
    int i, j;
    for (i = 0; i < n; i++){
        scanf ("%s", giver);
        scanf ("%d %d", &taka, &people);
        for (j = 0; j < people; j++){
            scanf ("%s", manush);
            mp[manush] += taka / people;
        }

        if (people != 0)
            mp[giver] -= (taka/people) * people;
    }
}

int main(){
    int i;
    bool blank = true;
    while (scanf ("%d", &n) == 1){
        name_nilam ();
        calcu ();
        if (!blank) puts ("");
        for (i = 0; i < n; i++)
            printf ("%s %d\n", name[i], mp[name[i]]);
        blank = false;
    }
    return 0;
}
