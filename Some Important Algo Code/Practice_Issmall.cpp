#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 99999
#define eps 1e-11
#define Inf 12345678912

char str[10];
int memo[18][2][10], len;
int dp(int i, int issmall, int prev);

int dp(int i, int issmall, int prev){
    int j, res = 0;
    if (i == len) return 1;
    if (i == 0){
        for (j = 1; j <= str[i]-48; j++){
            if (j == str[i]){
                res += dp(i+1,0,j);
                //printf ("Res_1 = %d\n", res);
            }
            else{
                res += dp(i+1,1,j);
               // printf ("Res_2 = %d\n",res);
            }
        }
    }
    else{
        if (issmall == true){
            for (j = 0; j <= 9; j++){
                if (prev != j){
                    res += dp(i+1,issmall,j);
                   // printf ("Res_3 = %d\n", res);
                }
            }
        }
        else{
            for (j = 0; j <= str[i]-48; j++){
                if (prev != j){
                    if (j == str[i]-48){
                        res += dp(i+1,issmall,j);
                        //printf ("Res_4 = %d\n", res);
                    }
                    else{
                        res += dp(i+1,1,j);
                        //printf ("Res_5 = %d\n", res);
                    }
                }
            }
        }
    }
    return res;
}

int main (){
    while (gets (str)){
        len = strlen(str);
        int res = dp(0,0,0);
        printf ("%d\n",res);
    }
    return 0;
}

