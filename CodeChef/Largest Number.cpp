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
#define MAX 5005
#define pb push_back
#define NL puts ("")

int n;

int divid (int v){
    int x = 1;
    while (v != 0){
        x = x * 10;
        v = v / 10;
        //printf ("X = %d     V = %d\n", x, v);
    }
    x = x / 10;
    return x;
}


int func1 (int v){
    int div, mod, val, fst_digit;

    div = divid (v);
    mod = v % div;

    fst_digit = (v - mod) / div;
    val = mod * 10 + fst_digit;

   // printf ("Div = %d   Mod = %d    First_Digit = %d    Val = %d\n", div, mod, fst_digit, val);
    if (fst_digit == 0)
        val = val / 10;
    return val;
}


int func2 (int v){
    int div, mod, val, lst_digit;

    div = divid (v);
    mod = v % 10;

    lst_digit = v / 10;
    val = mod * div + lst_digit;

//    printf ("Div = %d   Mod = %d    Last_Digit = %d    Val = %d\n", div, mod, lst_digit, val);
//    if (fst_digit == 0)
//        val = val / 10;
    return val;
}



int main(){
    int tc, ans, i, j, cnt, tmp, num, div, a, b, maxn;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        num = n;
        cnt = maxn = 0;

        while (num != 0){
            cnt++;
            num /= 10;
            //printf ("%d\n", num);
        }
        //printf ("Cnt = %d Num = %d\n", cnt, num);

//        printf ("%d\n", divid(n));
//        printf ("%d\n", func1(n));
//        printf ("%d\n", func2 (n));
//        a = func1 (n);
//        b = func2 (num);
//        printf ("A = %d   B = %d\n", a, b);


        num = n;
        maxn = func1 ( func2 (num));
        num = func2 ( func1 (num));
        //printf ("Maxn = %d  Num = %d\n", maxn, num);

        if (num > maxn)
            maxn = num;

        num = n;
        for(i = 0; i < cnt; i++){
            num = func1 (num);
            if(num > maxn)
                maxn = num;
           // printf ("Fast Maxn = %d     Num = %d\n", maxn, num);
        }
        NL;

        num = n;
        for(i = 0; i < cnt; i++){
            num = func2(num);
            if(num > maxn)
            maxn = num;
          //  printf ("Second Maxn = %d     Num = %d\n", maxn, num);
        }
        printf("%d\n", maxn);

    }
    return 0;
}











/*int tc, len,ans, a, b;
char str[MAX];

//string str;


int main(){
    char ch1, ch2;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", str);
        //cin >> str;

        len = strlen (str);
        //len = str.length();

        ch1 = str[0];
        ch2 = str[len-1];

        char *p = str;
        p++;

       // strcat (ch2, p);


        p[strlen(p)-1] = 0;
        //printf ("%s\n", p);
        //printf ("%c %c\n", ch1, ch2);


        //a = atoi (str);
        //swap (str[0], str[len-1]);
       // b = atoi (str);
        //printf ("%d\n", len);
        //printf ("%d  %d\n", a, b);
        //printf ("%c", ch);

//        str.erase (str[len-1], str[len-1]);
//        cout << str << endl;

    }
    return 0;
}*/

