#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define pb push_back
#define MAX 1000005

LLI arr[MAX], n, team;
LLI brr[5] = {1, 2, 3};

vector <LLI> vt1, vt2, vt3, vt;
set <LLI> st;

void result_pailam();

void make_team (){
    LLI i, j, a, b, c;

    for (i = 1; i <= n; i++){
        if (arr[i] == 1) vt1.pb (i);
        else if (arr[i] == 2) vt2.pb (i);
        else if (arr[i] == 3) vt3.pb (i);
    }

    a = vt1.size ();
    b = vt2.size ();
    c = vt3.size ();

   // printf ("%I64d %I64d %I64d\n", a, b, c);
    team = 0;
    team = min (a, b);
    team = min (team, c);

    result_pailam();

}

void result_pailam (){
    LLI cnt = -1, len, i, j;

    printf ("%I64d\n", team);

    for (i = 1; i <= team; i++){
        cnt++;
        printf ("%I64d %I64d %I64d\n", vt1[cnt], vt2[cnt], vt3[cnt]);


//        if (cnt == 0) printf ("%I64d ", vt1[cnt]);
//        else if (cnt == 1) printf ("%I64d ", vt2[cnt]);
//        else if (cnt == 2){
//            printf ("%I64d\n", vt3[cnt]);
//            cnt = -1;
//        }
   }
}


int main(){
    LLI i, j, ans;
    scanf ("%I64d", &n);
    for (i = 1; i <= n; i++) scanf ("%I64d", &arr[i]);

    make_team();

    vt.clear ();
    vt1.clear ();
        vt2.clear ();
            vt3.clear ();
    return 0;
}



/*bool khoj (LLI x){
    int i;
    for (i = 1; i <= x; i++)
        if (arr[i] != 1 || arr[i] != 2 || arr[i] != 3) return true;
    return false;
 }*/

/*void make_team (){
    LLI i, j, k, tmp;
    LLI a, b, c, res;

    res = n / 3;
    printf ("%I64d\n", res);

    for (k = 1; k <= res; k++){
        for (i = 1; i <= 3; i++){
            for (j = 1; j <= n; j++){
                if (arr[j] == 1){
                    //a = j;
                    vt.pb(j);
                    arr[j] = 0;
                }
                else if (arr[j] == 2){
                   // b = j;
                    vt.pb(j);
                    arr[j] = 0;
                }
                else if (arr[j] == 3){
                    //c = j;
                    vt.pb(j);
                    arr[j] = 0;
                }

            }
            printf ("%I64d ", vt[i]);
        }
        puts ("");
    }
}*/

