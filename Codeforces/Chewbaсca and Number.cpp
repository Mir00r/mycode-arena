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

int n;
char str[MAX], ch;

int cal (int x){
    int mod, div, tmp, mul =1;
    tmp = x;
    while (tmp > 0){
        mod = tmp % 10;
        //printf ("Mod = %d\n", mod);
        if (mod > 4 && mod != 9){
            x -= (mod - 9 + mod) * mul;
          //  printf ("X = %d\n", x);
        }
        mul *= 10;
        tmp /= 10;
        //  printf("Tmp = %d\n", tmp);
    }

    return x;
}


int main(){
    int ans;
    scanf ("%d", &n);
    ans = cal (n);
    printf ("%d\n", ans);


    /*int len , i, ans, arr[MAX];
    scanf ("%s", str);
    len = strlen (str);

    for (i = 0; i < len; i++){
        //printf ("%c", ch);
        if (str[i] == '0')
            arr[i] = 9;
        else if (str[i] == '1')
            arr[i] = 8;
        else if (str[i] == '2')
            //arr[i] = 7;
            arr[i] = 2;
        else if (str[i] == '3')
            arr[i] = 6;

        else if (str[i] == '4')
            //arr[i] = 5;
             arr[i] = 4;
        else if (str[i] == '5')
            arr[i] = 4;

        else if (str[i] == '6')
           // arr[i] = 3;
            arr[i] = 6;
        else if (str[i] == '7')
            arr[i] = 2;

        else if (str[i] == '8')
          // arr[i] = 1;
            arr[i] = 8;
        else if (str[i] == '9')
            arr[i] = 0;

    }
    for (i = 0; i < len; i++)
        printf ("%d", arr[i]);
    NL;*/
    return 0;
}
