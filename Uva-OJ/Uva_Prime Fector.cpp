#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 60
#define row 10
#define col 10
#define eps 1e-9
#define pb push_back
#define NL puts ("")

int main(){
    int num, i, tmp;
    while (scanf("%d", &num) == 1){
        if (num == 0) break;

        if(num < 0){
            printf("%d = -1 x ",num);
            num = num * -1;
        }
        else
            printf("%d = ",num);

        for(i = 2; i <= sqrt(num); i++){
            if(num % i == 0){       //if it is divisible then we proceed
                printf("%d x ", i);
                num /= i;    //num is changing
                //tmp = i;
                i = 1;        //i is initialized again
            }
        }
        printf("%d\n",num);
    }
    return 0;
}
