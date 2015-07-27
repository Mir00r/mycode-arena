#include <stdio.h>
#include <string>
#include <string.h>
#include <map>
#include <iostream>

using namespace std;

#define MAX 11009
#define LL long long




bool is_fibo[MAX];
int fibo[MAX];

void fibonaci (){
    int i, tmp;
    memset (is_fibo, false, sizeof is_fibo);
    fibo[0] = 1;
    fibo[1] = 1;
    for (i = 2; i <= 20; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
        is_fibo[fibo[i]] = true;
    }

    return;
}

int main(){
    fibonaci();
    int i, j, ans;
    int num;
    while (cin >> num){

        if(num==0) break;

        if (num == 1 || is_fibo[num] == false)
            puts ("Alicia");
        else
            puts ("Roberto");

    }

    return 0;
}

