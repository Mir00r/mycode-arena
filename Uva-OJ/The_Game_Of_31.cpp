#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 205
#define col 205
#define MAX 50
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007

#define maxi 6



LLI dp[maxi][maxi][maxi][maxi][maxi][maxi][32];

LLI play (LLI a, LLI b, LLI c, LLI d, LLI e, LLI f, LLI sum){
    LLI tmp = 0;

    //if (sum > 31) return 0;

    if (sum == 0) return 0;
    if (sum < 0) return 1;

//    LLI &res = dp[a][b][c][d][e][f][sum];
//    if (res != -1) return res;

    if (dp[a][b][c][d][e][f][sum] != -1)
        return dp[a][b][c][d][e][f][sum];


    /*
    if (play(a+1, b, c, d, e, f, sum+1) == 0 && sum <= 31) res = 1;
        //return res = 1;

        else if (play(a, b+1, c, d, e, f, sum+2) == 0 && sum <= 31) res = 1;
            //return res = 1;

            else if (play(a, b, c+1, d, e, f, sum+3) == 0 && sum <= 31) res = 1;
                //return res = 1;

                else if (play(a, b, c, d+1, e, f, sum+4) == 0 && sum <= 31) res = 1;
                    //return res = 1;

                    else if (play(a, b, c, d, e+1, f, sum+5) == 0 && sum <= 31) res = 1;
                        //return res = 1;

                        else if (play(a, b, c, d, e, f+1, sum+6) == 0 && sum <= 31) res = 1;
                            //return res = 1;
                            */


    if (a > 0){
        if (play(a-1, b, c, d, e, f, sum-1) == 0)
            return dp[a][b][c][d][e][f][sum] = 1;
//            return res = 1;
    }
    if (b > 0){
        if (play(a, b-1, c, d, e, f, sum-2) == 0)
           return  dp[a][b][c][d][e][f][sum] = 1;

//            return res = 1;
    }
    if (c > 0){
        if (play(a, b, c-1, d, e, f, sum-3) == 0)
            return dp[a][b][c][d][e][f][sum] = 1;
//            return res = 1;
    }
    if (d > 0){
        if (play(a, b, c, d-1, e, f, sum-4) == 0)
           return dp[a][b][c][d][e][f][sum] = 1;
//            return res = 1;
    }
    if (e > 0){
        if (play(a, b, c, d, e-1, f, sum-5) == 0)
            return dp[a][b][c][d][e][f][sum] = 1;
//            return res = 1;
    }
    if (f > 0){
        if (play(a, b, c, d, e, f-1, sum-6) == 0)
            return dp[a][b][c][d][e][f][sum] = 1;
//            return res = 1;
    }

    return dp[a][b][c][d][e][f][sum] = 0;
//    return res = 0;


}





int main(){
    LLI len, i, j, res, digit, ans, sum, cnt, check, num[15];
    LLI a, b, c, d, e, f;
    char str[MAX];
   // while (scanf ("%s", str) != EOF){

      while (gets (str)){

        len = strlen (str);

        cnt = check = sum = digit = 0;
    //    memo (num, 0);
        memo (dp, -1);

        for (i = 0; i < 6; i++)
            num[i] = 4;

        for (i = 0; i < len; i++){
            sum += str[i] - '0';
            num[str[i] - '1']++;
            //cnt++;
        }

        a = num[0]; b = num[1];
        c = num[2]; d = num[3];
        e = num[4]; f = num[5];
       // printf ("%lld %lld %lld %lld %lld %lld\n", a, b, c, d, e, f);

        sum = 31 - sum;
        ans = play(a, b, c, d, e, f, sum);

       // printf ("Ans = %lld\n", ans);

     //   if (str[0])
            printf ("%s ", str);

         if (ans == 1){
            if (len % 2 == 0) puts ("A");
            else puts ("B");
        }
        else{
            if (len % 2 == 0) puts ("B");
            else puts ("A");
        }

    }
    return 0;
}
