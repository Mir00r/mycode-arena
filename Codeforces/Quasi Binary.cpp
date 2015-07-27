#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 32
#define col 32
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777


int agaro[7], dosh[7];

void set_ten (){
    dosh[2] = 10;
    dosh[3] = 100;
    dosh[4] = 1000;
    dosh[5] = 10000;
    dosh[6] = 100000;
    dosh[7] = 1000000;
}


void set_elaven (){
    agaro[2] = 11;
    agaro[3] = 111;
    agaro[4] = 1111;
    agaro[5] = 11111;
    agaro[6] = 111111;
    agaro[7] = 1111111;
}

int n;

int cnt_digit (int x){
    int num = x, cnt = 0;

    while (num != 0){
        cnt++;
        num /= 10;
    }

    return cnt;
}


int divid (int v){
    int x = 1;
    while (v != 0){
        x = x * 10;
        v = v / 10;
        //printf ("X = %d     V = %d\n", x, v);
    }
    x /= 10;
    return x;
}


bool isdupli (int x){
    int num = x, cnt=0, len, tmp, ten;
    int div;

    tmp = num / divid (num);
    len = cnt_digit (num);
//    ten = divid (num);

    while (num != 0){
        ten = divid (num);
        div = num / ten;
        num %= ten;

       // printf ("Ten = %d   num = %d\n", ten, num);
        if (div == tmp)
            cnt++;
    }
   // printf ("Cnt = %d\n", cnt);

    if (cnt == len)
        return true;
    return false;
}


void ten_print (int x){
    set_ten ();
    int a, i, len;

    len = cnt_digit (x);
    a = x / divid (x);

    printf ("%d\n", a);

    for (i = 0; i < a; i++)
        printf ("%d ", dosh[len]);
}


void eleven_print (int x){
    set_elaven ();

    int a, i, len;

    len = cnt_digit (x);
    a = x / divid (x);

    printf ("%d\n", a);

    for (i = 0; i < a; i++)
        printf ("%d ", agaro[len]);
}


int main (){
    int i, j, tmp, cnt;

    scanf ("%d", &n);

    cnt = cnt_digit (n);

//    if (isdupli (n))
//        puts ("ok");
//    else
//        puts ("Not ok");



    if (cnt == 1){
        printf ("%d\n", n);
        for (i = 0; i < n; i++)
            printf ("1 ");
    }
    else if (cnt == 2){
        tmp = divid (n) * (n / 10);

        if (n % tmp == 0){
            ten_print (n);
        }
        else if (isdupli (n)){
            eleven_print (n);
        }
    }
    else if (cnt == 3){
         tmp = divid (n) * (n / 100);

        if (n % tmp == 0){
            ten_print (n);
        }
        else if (isdupli (n)){
            eleven_print (n);
        }
    }
    else if (cnt == 4){
         tmp = divid (n) * (n / 10000);

        if (n % tmp == 0){
            ten_print (n);
        }
        else if (isdupli (n)){
            eleven_print (n);
        }
    }

    return 0;
}
