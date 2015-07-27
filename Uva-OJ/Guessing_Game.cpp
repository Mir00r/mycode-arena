#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 15

int main (){
    int gues_num, i, j, len, ans, choto, boro;
    char str[MAX];
    choto = 0; boro = 12;
    while (scanf ("%d", &gues_num) == 1 && gues_num){
        scanf ("%s%s", str, str);
        //choto = 0; boro = 12;
        if (str[0] == 'o'){
            if (gues_num > choto && gues_num < boro) puts ("Stan may be honest");
            else puts ("Stan is dishonest");
            choto = 0; boro = 12;
        }
        else if (str[0] == 'l'){
            choto = max (choto, gues_num);
            //printf ("choto = %d\n", choto);
        }
        else if (str[0] == 'h'){
            boro = min (boro, gues_num);
            //printf ("boro = %d\n", boro);
        }
    }
    return 0;
}
