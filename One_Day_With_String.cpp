#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 205
#define col 205
#define MAX 50
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007



int main(){
    //char s[MAX], t[MAX], ch;
    string s, t, ch;

    int i, j, slen, tlen, ans, alpa[26], diff, num;
   // scanf ("%s %s", s, t);
    int a, b, x, y;
    cin >> s >> t;

//    slen = strlen (s);
//    tlen = strlen (t);

    slen = s.length ();
   // tlen = t.length ();

//    s[slen-1]++;
//    cout << s[slen-1] << endl;
    int cnt = a = b = x = y = 0;

    for (i = 0; i < slen; i++){
        a += s[i] - 'a';
        b += t[i] - 'a';
    }

   // printf ("%d %d\n", a, b);

        for ( i = slen -1; i >= 0; i--){

            x += s[i] - 'a';
            y += t[i] - 'a';

           // printf ("%d\n", 'z' - s[i]);

            for (j = 0; j < y - x; j++){

                if (s[i] != 'z'){

                //ch[cnt++] = s[i]++;

                    s[i]++;
                    cout << s << endl;
                   // break;

                }
                else{
                    s[i] = 'a';
                    cout << s << endl;
                }

            }

        }





    //printf ("%d\n", s.length());


    return 0;
}

