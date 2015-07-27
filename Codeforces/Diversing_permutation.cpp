#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 100005

int main(){
    int n, k, i, j, cnt, tmp, ans, per, check;
    scanf ("%d %d", &n, &k);
    per = 1;
    tmp = k;
    printf ("1");
    for (i = 0; i < tmp; i++){
        if (i % 2 == 1){
           // puts ("if ok");
            per -= k;
            printf (" %d", per);
        }
        else{
            //puts ("else ok");
            per += k;
            printf (" %d", per);
            //per++;
        }
        per--;
    }
    for (i = tmp+2; i <= n; i++)
        printf (" %d", i);
    puts ("");
    return 0;
}

/*int main(){
    int n, k, i, j, cnt, tmp, ans, per, check;
    scanf ("%d %d", &n, &k);
    per = 1;
    for (i = 1; i <= k+1; i++){
        if (i % 2 == 1){
           // puts ("if ok");
            printf ("if ok = %d ", per);
        }
        else{
            //puts ("else ok");
            printf ("else of %d ", k - per+2);
            per++;
        }
    }
    for (i = k+2; i <= n; i++)
        printf ("Loop %d ", i);
    puts ("");
    return 0;
}*/
