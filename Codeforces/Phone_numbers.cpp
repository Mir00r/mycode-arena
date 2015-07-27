#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 105
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


int main(){
    int n, len, i, j, div, tmp;
    char num[MAX];
    //string num;
    scanf ("%d %s", &n , num);
    //cin >> num;


    for (i = 0; i < n; i++){

        printf ("%c", num[i]);
        if (i % 2 == 1 && i < n-2)
            printf ("-");
        //else printf ("%c", num[i]);
    }


//    if (n % 2 == 0){
//        div = n / 2;
//        for (i = 0; i < n; i++){
//            if (i % div == 0)
//                printf ("-");
//            else
//               // printf ("%c", num);
//                //cout << num;
//                putchar(num[i]);
//        }
//    }
//    else{
//        div = n / 2;
//        for (i = 1; i <= n+2; i++){
//            if (i % div == 0)
//                printf ("-");
//            else
//               // printf ("%c", num);
//              //  cout << num;
//                putchar (num[i]);
//        }
//    }
    NL;
    return 0;
}
