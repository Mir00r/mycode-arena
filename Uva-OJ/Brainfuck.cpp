#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000005

int main(){
    int tc, cs=1, i, j, index;
    char dis_com[MAX];
    //char memo[100];
    scanf ("%d", &tc);
    getchar();
    while (tc--){
        gets(dis_com);
        index = 0;
        char memo[100] = {};
        for (i = 0; i < dis_com[i]; i++){
            switch(dis_com[i]){
                case '>':
                    index++;
                    break;
                case '<':
                    index--;
                    break;
                case '+':
                    memo[index]++;
                    break;
                case '-':
                    memo[index]--;
                    break;
            }
            if (index >= 100) index = 0;
            if (index < 0) index = 99;
        }
        printf ("Case %d:", cs++);
        for (i = 0; i < 100; i++)
            //printf ("%s", memo[i]);
            printf(" %02X", memo[i]);
            printf ("\n");
    }
    return 0;
}
