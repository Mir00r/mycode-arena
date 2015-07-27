
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

char *store[] = {};
char str[MAX];
int ind, n, m;
vector <char> vt;

void swp (char *ch1, char *ch2){
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

void permut (char *ch, int indx, int len){
    int i;
    ind = 0;
    if (indx == len){
        printf ("%s\n", ch);
        //store[ind] = ch;
        //ind++;
    }
    else {
        for (i = indx; i <= len; i++){
            //swep ((ch+indx), (ch+i));
            swp ((ch+indx), (ch+i));
            permut(ch, indx+1, len);
            //swep ((ch+indx), (ch+i));  // call for backtrack
            swp ((ch+indx), (ch+i));
        }
    }
    //printf ("\n");
}

int main(){
    int tc, len, res, tmp, cnt, i, j;
    scanf ("%d %d", &n, &m);
        char ch;
        for (i = 1; i <= n; i++){
            //str[i] = to_string(i);
           // ch = i;
            vt.pb(i) = ch;
        }

        len = strlen (str);
        printf ("Len = %d\n", len);
        permut (str, 0, len-1);

    return 0;
}

