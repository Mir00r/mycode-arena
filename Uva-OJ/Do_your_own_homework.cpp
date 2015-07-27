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
#define row 200
#define col 150
#define MAX 300006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define eps 1e9
#define mod 1000000007

char sub_name[row][col];
int req_time[MAX];

int main(){

    int tc, no_sub, D, cs=1, i, j, k, cheeck=0;
    //char sub_name[25], sub_name[25];
    scanf ("%d", &tc);

    while (tc--){
        int rem = 0;

        scanf ("%d", &no_sub);
        for (i = 0; i < no_sub; i++)
            scanf ("%s %d", &sub_name[i], &req_time[i]);
        scanf ("%d", &D);
        scanf ("%s", &sub_name[no_sub]);

        for (j = 0; j < no_sub; j++){
            if(!strcmp(sub_name[j], sub_name[no_sub])){
                cheeck = 1;
                rem = req_time[j];
                break;
            }
        }

        if (D >= rem && cheeck != 0)
            //if (req_time[j] >= D + 5)
            printf ("Case %d: Yesss\n", cs++);
            //printf ("Case %d: Do your own homework!\n", cs++);

        else if (rem > D && rem <= D+5 && cheeck != 0)
            //(req_time[j] <= D)
            printf ("Case %d: Late\n", cs++);
            //printf ("Case %d: Yesss\n", cs++);

        else if (cheeck == 0)
            printf ("Case %d: Do your own homework!\n", cs++);
        else
            printf ("Case %d: Do your own homework!\n", cs++);
        cheeck = 0;
        rem = 0;
    }
    return 0;
}
