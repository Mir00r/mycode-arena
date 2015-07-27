#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 100005


int main (){
    int team_1[MAX], team_2[MAX];
    int n, i, j, tmp, ans, cnt;

    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        scanf ("%d %d", &team_1[i], &team_2[i]);
    for (i = 1; i <= n; i++){
        if (i <= (n/2) || team_1[i] < team_2[n - i + 1]) printf ("1");
        else printf ("0");
    }
    puts ("");
    for (i = 1; i <= n; i++){
        if (i <= (n/2) || team_2[i] < team_1[n - i + 1]) printf ("1");
        else printf ("0");
    }
    puts ("");
    return 0;
}
