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
#define MAX 100005
#define alpa 26
#define row 2005
#define col 2005
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)

//char vow[] = {'a', 'e', 'i', 'o', 'u'};

//char a[MAX], b[MAX], c[MAX];

char str[MAX];

//int vow_cnt (char ch[], int len){
//    int i , cnt=0;;
//    for (i = 0; i < len; i++)
//        if (ch[i] == vow[i]) cnt++;
//
//    return cnt;
//}

int main(){
    int x, y, z, p, q, r, ans, i, cnt, j;
    bool check = false;
    int flag = 0;
    int len;
    for (i = 0; i < 3; i++){
        cnt = 0;
        //scanf ("%s", str);
        gets (str);
        len = strlen (str);

        for (j = 0; j < len; j++){
            //if (str[j] == vow[j]) cnt++;
            if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
                cnt++;

        }
//        printf ("Cnt = %d\n", cnt);

        if (cnt == 5 && i == 0)
            //check = true;
            flag++;
        else if (cnt == 7 && i == 1)
          //  check = true;
            flag++;
        else if (cnt == 5 && i == 2)
           // check = true;
            flag++;
    }

    if (flag == 3) puts ("YES");
    else puts ("NO");


    /*x = strlen (a);
    y = strlen (b);
    z = strlen (c);

    p = vow_cnt(a, x);
    q = vow_cnt(b, y);
    r = vow_cnt(c, z);
                        */

   // printf ("P = %d     Q = %d      R = %d\n", p, q, r);
    return 0;
}
