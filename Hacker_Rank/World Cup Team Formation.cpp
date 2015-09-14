// Abdur Razzak
// Daffodil International University

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 30006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795

int point[MAX];

int main (){
    int cosh_1=0, cosh_2=0, i, j;

    for (i = 0; i < 10; i++)
        scanf ("%d", &point[i]);

    sort (point, point + 10);

    for (i = 10-1; i >= 5; i-= 2)
        cosh_1 += point[i];

    for (i = 10 - 2; i >= 4; i -= 2)
        cosh_2 += point[i];

        printf ("%d\n", max (cosh_1, cosh_2) );


    return 0;
}
