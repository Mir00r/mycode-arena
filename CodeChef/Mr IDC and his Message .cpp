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
#define MAX 20005
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")

int k, wrd_val[alpa];
char str[MAX];



int main(){
    int tc, i, j, len, cnt, ans, tmp, sum, val;
    scanf ("%d", &tc);

    while (tc--){
        scanf ("%d %s", &k, str);

        for (i = 0; str[i] != '\0'; i++){
            str[i] = ((str[i] - 'a' + k) % 26) + 'a';
        }
        printf ("%s\n", str);
    }
    return 0;
}

/*
        for (i = 1; i <= alpa; i++)
            wrd_val[i] = i;

        len = strlen (str);
        sum = tmp = val = 0;

        for (i = 0; i < len; i++){
            wrd_val[str[i] - 'a' ]++;
        }

//        for (i = 0; i < len; i++)
//            printf ("%d ",wrd_val[i]);

        for (i = 0; i < len; i++){
            sum = str[i] - 96;
            tmp = (sum - k) % 26;
            val = tmp + 96;

            printf ("Sum = %d   tmp = %d    val = %d\n", sum, tmp, val);

            printf ("%c", str[val]);
        }
    */
