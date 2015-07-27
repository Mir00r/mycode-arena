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
#define MAX 105
#define row 30
#define col 30
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001


int main(){
    //char s[MAX], t[MAX], ch;
    string s, t, ch;

    int i, j, slen, tlen, ans, alpa[26], a, b, diff, num;
   // scanf ("%s %s", s, t);

    cin >> s >> t;

//    slen = strlen (s);
//    tlen = strlen (t);

    slen = s.length ();
   // tlen = t.length ();

    for (i = slen-1; i >= 0; i--){
        if (s[i] != 'z'){
           // puts ("ok");
            s[i]++;
            break;
        }
        else{
           // puts ("Pakka");
            s[i] = 'a';
        }
    }

   // printf ("%d\n", s.length());

    if (s != t)
        cout << s;
    else
        puts ("No such string");
    return 0;
}


/*

    a = b = 0;
    //bool check[MAX];
    int res[MAX];
    CLR (res);
    for (i = 0; i < slen; i++){
//        a += s[i] - 'a';
//        b += t[i] - 'a';

        if ( (s[i] == t[i]) || ( (t[i] - 'a') - (s[i] - 'a') ) == 1){
            //puts ("ok");
            //check[i] = true;
            res[i]++;
        }
        else{
           // puts ("kaka");
            ch = ( ( (t[i] - 'a') - (s[i] - 'a') ) + 96);
           // printf ("%c", ch);
        }

    }
    //puts ("No such string");



    for (i = 0; i < slen; i++){
        if (res[i] == 1 && res[slen-1] == 1){
            puts ("No such string");
            return 0;
        }
        else{
            //printf ("%c", ch);
            cout << ch;
        }
    }
    NL;






    for (i = 0; i < 26; i++)
        alpa[i + 'a']++;

    diff = abs (a-b);

   diff = (t[0] - 'a') - (s[0] - 'a');

   printf ("%d %d %d\n", a, b, diff);

    for (i = 0; i < slen; i++){
        ch = (t[0] - 'a') + 96;
    }



    if (diff == 1)
        puts ("No such string");

    else if (s[0] != t[0]){
        for (i = 0; i < slen; i++){
            printf ("%c", ch);
        }
        NL;
    }
    else
        puts ("No such string");


    num = (t[i] - 'a') - (s[i] - 'a');
     printf ("%d\n", num);
    ch = (t[i] - 'a') + 96;

*/
