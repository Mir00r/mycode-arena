#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 100
#define row 50
#define col 50

int k, i, j, arr[MAX];
char ch;

int main(){
//    int k, cnt, i, j, tmp, len, arr[MAX];
//    char str[row][col], ch;
    scanf ("%d", &k);
        int flag = 0;
        //for (i = 0; i < 4; i++)
            for (j = 0; j < 16; j++){
                scanf (" %c", &ch);
                if (ch == '.') continue;
                arr[ch - '0']++;
            }
        for (i = 0; i < 9; i++)
            if (arr[i] > 2*k){
                //flag = 1;
                puts ("NO");
                //break;
                return 0;
            }
        //if (flag) puts ("NO");
        puts ("YES");
   // return 0;
}
