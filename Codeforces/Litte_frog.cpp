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
#define row 5
#define col 5
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int main(){
    int n, i, j, beg, end, cnt, tmp, ans;
    scanf ("%d", &n);
    beg = 1;
    end = n;

     for (i = 1; i <= n; i++){
        if (i % 2 != 0){
            printf ("%d ", beg);
            beg++;
        }
        else{
            printf ("%d ", end);
            end--;
        }
    }
    NL;
    return 0;
}
