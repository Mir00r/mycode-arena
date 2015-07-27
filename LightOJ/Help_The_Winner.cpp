#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long
#define ULL unsigned long long
#define MAX 1 << 15
#define row 20
#define col 20
//#define mem (a, v) memset (a, v, sizeof(a))

LLI  dp[MAX][1 << 3];
LLI n, matrix[row][col];

LLI set (int x, int pos){       // check for n number position k '1' kor a dei;
    return x = x | (1 << pos);
}

LLI reset (int x, int pos){     // check for n number position k '0' = kor a dei;
    return x = x & ~ (1 << pos);
}

bool check (int x, int pos){    // check for pos bit a ki ase sheita resurn kor a dei;
    return (x & (1 << pos));
}

LLI call_bit_mask(int mask_1, int mask_2){
    LLI j, maxn, indx;
    //maxn = MAX;
    //if (mask == (1 << n) - 1) resurn 0;
    //if (dp[mask] != -1) resurn dp[mask];
    //if (i == n) resurn 0;
    if (mask_1 == (1 << n) -1){
       if (check(mask_2, 2)) return 1;

       if (check(mask_2, 0) == 0) return 1;
       return 0;
    }


    LLI &res = dp[mask_1][mask_2];
    if (res != -1) return res;
    res = indx = 0;
    //indx = mask_1;
    for (j = 0; j < n; j++){
        if (check(mask_1, j) == 0)
            res += call_bit_mask(set (mask_1, j), set (mask_2, matrix[indx][j]));
          indx++;
    }
//    for (j = 0; j < n; j++){
//        if (check(mask, j) == 0)
//            //res = max (res, call_bit_mask(i+1, set(mask, j))) + matrix[i][j];
//            //res = max (res, call_bit_mask(i+1, set(mask, j)) + matrix[i][j]);
//            res += (call_bit_mask(i+1, set(mask, j)) + matrix[i][j]);
//    }
    return res;
}

int main(){
    LLI tc, cs=1, i, j, cnt, tmp, res, man, woman, ans;
    scanf ("%lld", &tc);
    while (tc--){
        scanf ("%lld", &n);
        memset (dp, -1, sizeof (dp));
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++) scanf ("%lld", &matrix[i][j]);
        memset (dp, -1, sizeof (dp));
        ans = call_bit_mask(0, 0);
        printf ("Case %lld: %lld\n", cs++, ans);
    }
    return 0;
}

