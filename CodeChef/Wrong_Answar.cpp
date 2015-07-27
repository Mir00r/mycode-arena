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
#define row 32
#define col 32
#define MAX 30006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
//#define mod 7477777


int arr[row];
char MrX[row];
char MrY[row];


int main(){

    int tc, i, j, len, tmp, ans, cnt;

    scanf ("%d", &tc);

    while (tc--){
        scanf ("%s", MrX);
        scanf ("%s", MrY);

        len = strlen (MrX);

      //  sort_korlam (len);

        for (i = 0; i < len ; i++){
            arr[i] = MrX[i] - 48;
           // printf ("%d ", arr[i]);
        }
       // NL;

        for (i = 0; i < len; i++)
            for (j = 0; j < len - 1 - i; j++){
                if (arr[j] > arr[j+1]){

                    arr[j] = arr[j] + arr[j+1];
                    arr[j+1] = arr[j] - arr[j+1];
                    arr[j] = arr[j] - arr[j+1];
                }
            }

       // printf ("%d\n", arr[0]);

        if (arr[0] == 0 ){
           // rem_zero (len);
            for (i = 1; i < len; i++){
                if (arr[i] != 0){

         //           puts ("ok");
                    arr[0] = arr[0] + arr[i];
                    arr[i] = arr[0] - arr[i];
                    arr[0] = arr[0] - arr[i];

                    break;
                }
            }
        }

        for (i = 0; i < len; i++)
            MrX[i] = arr[i] + 48;

        MrX[len] = '\0';

        //printf ("%s     %s", MrX, MrY);
       // NL;

        if (strcmp (MrX, MrY))
            puts ("WA");
        else
            puts ("AC");
    }


    return 0;
}


/*
void sort_korlam (int ln){
    int i , j;

    for (i = 0; i < ln ; i++)
        arr[i] = MrX[i] - '48';

    for (i = 0; i < ln; i++)
        for (j = 0; j < ln - 1 - i; j++){
            if (arr[j] > arr[j+1]){

                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
}


void rem_zero (int ln){
    int i, j;

    for (i = 1; i < ln; i++){
        if (arr[i] != 0){

            arr[0] = arr[0] + arr[i];
            arr[i] = arr[0] - arr[i];
            arr[0] = arr[0] - arr[i];

            break;
        }
    }
}

*/
