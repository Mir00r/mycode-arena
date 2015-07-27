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

void ans_print (int p){
    if (p == 1)
        puts ("1/6");
    else if (p == 2)
        puts ("1/3");
    else if (p == 3)
        puts ("1/2");
    else if (p == 4)
        puts ("2/3");
    else if (p == 5)
        //puts ("0/1");
        puts ("5/6");
    else
        puts ("1/1");
}


int main(){
    int y, w, proba, ans;

    scanf ("%d %d", &y, &w);
   // proba = (y+w) / 6;
    if (y > w){
       // proba = (6 - (y-1)) / 6;
        proba = 6 - (y-1);
        ans_print(proba);
    }
    else{
        proba = 6 - (w-1);
        ans_print(proba);
    }
    //printf ("%d/2", proba);
    return 0;
}
