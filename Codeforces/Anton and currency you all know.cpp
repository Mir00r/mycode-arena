#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 100005
#define row 1001
#define col 1001
#define pb push_back

char str[MAX];


/*int check_even(char *str){
    int len, i, j, num;
    //len = str.length();
    //num = atoi (str.c_str());
    num = atoi (str);
    //printf ("Num = %d\n", num);
    if (num % 2 == 0) return num;
    else return -1;
}


void swp (char *ch1, char *ch2){
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

void permut (char *ch, int indx, int len){
    int i, ans;
    //if (indx == len) printf ("%s\n", ch);
    //else {
        for (i = indx; i <= len; i++){
            //swep ((ch+indx), (ch+i));
            swp ((ch+indx), (ch+i));
            permut(ch, indx+1, len);
            //swep ((ch+indx), (ch+i));  // call for backtrack
            swp ((ch+indx), (ch+i));
            ans = check_even(ch);
        }
    //}
    printf ("%d\n", ans);
}*/


int main (){
    int len, i, j, ans, tmp;
    //cin >> str;
    scanf ("%s", str);
    len = strlen (str);
    //len = str.length ();
    //for (i = 0; i < len; i++){
        //swap (str[i], str[i-1]);
        //next_permutation (str, str+len)
        //permut(str, 0, len-1);
        tmp = -1;
        for (i = len-1; i >= 0; i--){
            //printf ("%c ", str[i]);
            if (str[i] % 2 == 0){
                if (str[i] < str[len-1]) tmp = i;
                else if (tmp == -1) tmp = i;
            }
        }
       // printf ("Tmp = %d\n", tmp);
        if (tmp == -1) puts ("-1");
        else{
            swap (str[tmp], str[len-1]);
            printf ("%s\n", str);
        }

        //printf ("%d\n", ans);
    //}
    //printf ("%d\n", ans);
    return 0;
}
