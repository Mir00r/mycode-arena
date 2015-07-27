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
#define MAX 300006
#define alpha 26
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007

int res[alpha];


int main(){
    int n, i, j, len, cnt, tmp, indx;

    char str[MAX];


    scanf ("%d", &n);
    scanf ("%s", str);

    len = strlen (str);
    cnt = indx = 0;

    for (i = 0; i < len; i++){
        if (i % 2 == 0){
            //puts ("Even");
            res[str[i] ]++;
        }
        else{
           // puts ("Odd");
            indx = str[i] + 32;
           // printf ("Ind = %d\n", indx);

            if (res[indx] > 0){
             //   puts ("oka");
                res[indx]--;
            }
            else{
               // puts ("Boka");
                cnt++;
            }
        }
    }

    printf ("%d\n", cnt);

    return 0;
}



/*
 indx = str[i] - 'a';
       // printf ("%Id1 = d\n", indx);

        res[indx]++;

        indx = str[i+1] - 'A';
       // printf ("Id2 = %d\n", indx);

        if (res[indx] > 0){
            res[indx]--;
            continue;
        }
        cnt++;


*/
