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

#define LLI __int64
#define ULL unsigned long long int
#define MAX 5005
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001

char num[MAX];
int n, len;


int cal_sum (int x){
    int i, sum=0;
    for (i = 0; i < x; i++)
        sum += num[i] - 48;
    return sum;
}


int sum_cal (int x){
    int i, sum=0;
    for (i = x; i < n; i++)
        sum += num[i] - 48;
    return sum;
}


int main(){
    int i, j, len, tmp, ans, sum, digit, div, a, b;
    scanf ("%d %s", &n, num);
    div = n / 2;
    //len = strlen (num);

    a = cal_sum (div);
    b = sum_cal (div);
//
//    printf ("%d %d\n", a, b);
    bool fast, secd, check;
    fast = secd = check = false;

    for (i = 0; i < n; i++){
        if ((num[i] != '7' && num[i] != '4')){
            check = true;
            break;
        }
//        else{
//            check = false;
//            //break;
//        }
    }

    if ( !check && a == b ) puts ("YES");
    else puts ("NO");

    return 0;
}


/*
    for (i = 0; i < div; i++){
        if ( (num[i] == '7' || num[i] == '4') && div > 1){
            fast = true;
            break;
        }
    }

    for (i = div; i < n; i++){
        if ( (num[i] == '7' || num[i] == '4') && div > 1){
            secd = true;
            break;
        }
    }



*/
