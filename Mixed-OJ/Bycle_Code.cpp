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
#define LLI long long
#define LL __int64
#define ULL unsigned long long
#define row 55
#define col 55
#define MAX 10+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777



int main(){
    int a, b, i, j, ans;

    char fast[MAX], sec[MAX];

    scanf ("%s", fast);
    scanf ("%s", sec);

    a = atoi (fast);
    b = atoi (sec);

//    printf ("%d %d\n", a, b);


    if (a % 2 == 0 && b % 2 == 1)
        puts ("yes");
    else
        puts ("no");

    return 0;
}
