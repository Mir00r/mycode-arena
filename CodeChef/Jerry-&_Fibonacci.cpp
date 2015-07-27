#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <map>


using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005

//LLI fibo[MAX], n;
//bool check;


/*void gen_fibo (){
    LLI i, j;

    fibo[0] = 0;
    fibo[1] = 1;
    check = false;

    for (i = 2; i <= MAX; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        if (fibo[i] == n){
            check = true;
            break;
        }
    }
}

*/


int main (){
    //gen_fibo();
    LLI tc, i, j;
    LLI fibo[MAX], n;

    LLI check;
    scanf ("%lld", &tc);

    while (tc--){
        fibo[0] = 0;
        fibo[1] = 1;

        scanf ("%lld", &n);

        check = 0;

        for (i = 2; i < MAX; i++){
            fibo[i] = fibo[i - 1] + fibo[i - 2];
            if (fibo[i] == n){
                check = 1;
                break;
            }
        }

        if (check) puts ("is fibo");
        else puts ("not fibo");
    }
    return 0;
}


