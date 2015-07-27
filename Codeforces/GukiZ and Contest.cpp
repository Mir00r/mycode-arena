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
#define MAX 10000+6
#define jora pair <LLI, LLI>
#define ff first
#define ss second
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777




int main () {
    int arr[MAX], ans, i, j, n;
    scanf ("%d", &n);

    for (i = 0; i < n; i++)
        scanf ("%d", &arr[i]);

     for (i = 0; i < n; i++){
        ans = 1;
        for (j = 0; j < n; j++)
            if (arr[j] > arr[i]){
              //  puts ("oka");
                ans++;
            }
           // puts ("Boka");
            printf ("%d ", ans);
     }
     NL;

    return 0;
}



/*


/*
My test Case

5
5 3 2 4 3
3 5 3 4 5
1 3 3
9 6
5 3 8 3
1 1 2

27 27 27 27 26


*/





int main (){
    int n, num, arr[MAX], cnt, in , x, indx[MAX], str[MAX], res[MAX], i, j;

    x = cnt = 0;
    in = 1;

    scanf ("%d", &n);

    for (i = 0; i < n; i++) {

        scanf ("%d", &arr[i]);
        str[i] = arr[i];
    }

    if (n == 1)
        puts ("1");
    else{

        sort (str, str + n);

        for (i = 0; i < n; i++) {
            if (str[i] != arr[i])
                indx[cnt++] = str[i];
        }

        if (cnt == 0) {
           for (i = n-1; i >= 0; i--)
                str[x++] = arr[i];

            for (j = 0; j < n; j++) {
                if (str[j] != arr[j])
                    indx[cnt++] = str[j];
            }

            sort (indx, indx + cnt);
        }


    //    for (i = 0; i < cnt; i++)
    //        printf ("%d ", indx [i] );



        int check = 0;
        for (i = cnt - 1; i >= 0; i--){
            for (j = 0; j < n; j++){
                if (indx [i] == arr [j] ){
                    res[j] = in;
                    check++;
                }
                //in++;
            }
            in += check;
            check = 0;
        }

        for (i =0; i < n; i++)
            printf ("%d ", res[i]);

        NL;
    }

    return 0;
}

*/
