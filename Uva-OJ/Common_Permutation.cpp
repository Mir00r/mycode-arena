#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 1000+10

int common[MAX], cntA[MAX], cntB[MAX];

int main(){
    int i, j, k, len_a, len_b;
    char str_a[MAX], str_b[MAX];
    while (gets(str_a) && gets(str_b)){
        len_a = strlen(str_a);
        len_b = strlen(str_b);
        memset (cntA, 0, sizeof(cntA));
        memset (cntB, 0, sizeof(cntB));
       // memset (common, 0, sizeof(common));
        for (i = 0; i < len_a; i++) cntA[str_a[i] - 'a']++;
            for (i = 0; i < len_b; i++) cntB[str_b[i] - 'a']++;

            for (i = 0; i < 26; i++) common[i] = min (cntA[i], cntB[i]);

             for (i = 0; i < 26; i++){
                for (j = 0; j < common[i]; j++)
                    //putchar(str_a+i);
                    //printf ("%c", str_a[i]);
                    printf ("%c", 'a'+i);
             }
          // putchar();
            printf ("\n");
    }
    return 0;
}
