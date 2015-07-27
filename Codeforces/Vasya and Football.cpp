#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 105
#define row 10
#define col 105

//char tm1[MAX], tm2[MAX];
char team[row][col], ha[MAX], card[MAX];

int n, brr[row][col];

//typedef pair <int, char> jora;
//map <jora, jora> mp;

//struct info {
//    int time, pn;
//}arr[MAX];



int main(){
    int i, j, a, b, ans, cnt, tmp;
    int time, pn;
    scanf ("%s %s", team[0], team[1]);
    scanf ("%d", &n);
    for (i = 0; i < n; i++){
        scanf ("%d %s %d %s", &time, ha, &pn, card);
        if (ha[0] == 'h') a = 0;
        else a = 1;

        if (card[0] == 'y') b = 1;
        else b = 2;

       // printf ("Before = %d\n", brr[a][pn]);
        if (brr[a][pn] < 2 && brr[a][pn]+b >= 2)
            printf ("%s %d %d\n", team[a], pn, time);
        brr[a][pn] += b;
        //printf ("After = %d\n", brr[a][pn]);
    }
    return 0;
}


/*
int main(){
    int i , j, len, cnt, ans;
    int tm, pn;
    char team[MAX], card[MAX];
    bool check[MAX], flag[MAX];
    scanf ("%s %s", tm1, tm2);
    scanf ("%d", &n);
    jora fast, sec;
    for (i = 0; i < n; i++){
        //scanf ("%d %s %d %s", &arr[i].time, st, &arr[i].pn, card);
//        if (st == 'a' && card == 'y')
//        printf ("%s %s",  st,  card);
//        puts ("");

        scanf ("%d %s %d %s", &tm, team, &pn, card);
        fast = jora (tm, team[i]);
        sec = jora (pn, card[i]);
        //printf ("%d %d\n", sec.first, fast.first);
        //printf ("%s %s\n", mp[jora (tm, team[i])].second, sec.second);

    }
    //printf ("%d %d\n", mp[sec].first, mp[fast].first);

    ans = cnt = 0;

    for (i = 0; i < n; i++){
//        if (card[i] == 'r' && team[i] == 'a') {
//            printf ("%s %d %d\n", tm2, sec.first, fast.first);
//        }
        if (card[i] == 'r' && team[i] == 'h')
            printf ("%s %d %d\n", tm1, sec.first, fast.first);


//        if ( (card[i] == 'r' && st[i] == 'a') || (card[i] == 'r' && st[i] == 'h')){
//            printf ("%s %d %d\n", tm2, arr[i].pn, arr[i].time);
//            check[i] = true;
//        }
//
//        if ( (card[i] == 'y' && st[i] == 'a') || (card[i] == 'y' && st[i] == 'h')){
//            printf ("%s %d %d\n", tm2, arr[i].pn, arr[i].time);
//            flag[i] = true;
//        }

    }

//    for (i = 0; i < n; i++){
//        if (check[i] == true){
//            if (st[i] == 'a')
//                printf ("%s %d %d\n", tm2, arr[i].pn, arr[i].time);
//            else
//                printf ("%s %d %d\n", tm1, arr[i].pn, arr[i].time);
//        }
//    }
    return 0;
}
*/
