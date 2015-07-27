#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 30
#define eps 1e9
//#define memo (array, value) memset (letter, value, sizeof (letter));

int main(){
    int X, R, C, M, N, cs = 0, ans, i, j, max, flag, letter[MAX];
    char grid[MAX];
    scanf ("%d", &X);
    while (X--){
        scanf ("%d%d%d%d", &R, &C, &M, &N);
        memset (letter, 0, sizeof (letter));
       //memo (letter, 0);
        ans = 0; max = -1;
        for (i = 0; i < R; i++){
            scanf ("%s", grid);
            for (j = 0; j < C; j++) letter[grid[j] - 'A']++;
        }
        for (i = 0; i < 26; i++) if (letter[i] > max) max = letter[i];
        for (i = 0; i < 26; i++)
            if (letter[i] == max) ans += letter[i] * M;
            else ans += letter[i] * N;
        printf ("Case %d: %d\n", ++cs, ans);
    }
    return 0;
}
