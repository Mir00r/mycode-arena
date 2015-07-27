#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI __int64
#define MAX 100
#define pi 3.1415926535897932384626433832795

int com_num[MAX], cnt;
bool com[MAX];

void comp_num (int a){
    int i, j, fact, cnt=0;
    for (i = 2; i <= a; i++){
        for (j = 1; j < i; j++){
            if (i % j == 0) fact = j;
        }
        if (fact > 1){
            printf ("%d ", i);
            com_num[cnt++] = i;
        }
    }
}


int main(){
    int n, i, j, fact, check, ans, tmp;
    //comp_num();
    memset (com_num, 0, sizeof (com_num));
    scanf ("%d", &n);
    comp_num(n);
    for (i = 0; i < n; i++) printf ("%d ", com_num[i]);
  //  tmp = com_num[0];

//    for (i = 0; i < n; i++){
//        tmp = com_num[i];
//        //puts ("OK");
//        if (tmp + com_num[i] == n){
//            printf ("%d %d\n", tmp, com_num[i]);
//            return 0;
//        }else continue;
//    }
    /*scanf ("%d", &n);
    for (i = 1; i < n; i++){
        if (n % i == 0) fact = i;
    }
    if (fact > 1) puts ("Composite Number");
    else puts ("Not Composite number");*/
    return 0;
}
