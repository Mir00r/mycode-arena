#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 105
#define row 20
#define col 20
#define eps 1e-9

//     int tc, cs=1, i, j, len, ans, cnt, hols, check;

int hole_check (char ch[]){
    int hols=0, i, len;
    len = strlen (ch);
    for (i = 0; i < len; i++){
        if (ch[i] == 'B') hols += 2;
        else if (ch[i] == 'A' || ch[i] == 'D' || ch[i] == 'O' || ch[i] == 'P' || ch[i] == 'Q' || ch[i] == 'R') hols++;
        //else hols = 0;
    }
    return hols;
}

int main(){
    int tc, cs=1, i;
    char str[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", str);
        int ans = hole_check(str);
        printf ("%d\n", ans);
    }
    return 0;
}
