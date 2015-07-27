#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <map>
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

map <int, int> mp;
int n, num[MAX];
char ch;

int main(){
    int len, i, j, cnt=0, ans, tmp;

    do{
        scanf ("%d%c", &n, &ch);
        if (mp[n] == 0){
            //puts ("ok");
            mp[n] = 1;
            num[cnt++] = n;
            //printf ("%d\n", num[cnt]);
        }
    }while (ch != '\n');

    sort (num, num+cnt);

//    for (i = 0; i < cnt; i++)
//        printf ("%d ", num[i]);
//    NL;



    for (i = 0; i < cnt; i++){
        tmp = i;
        while (num[tmp+1] - 1 == num[tmp]){
            //puts ("Whl ok");
            tmp++;
        }
        //printf ("Tmp = %d\n", tmp);
        printf ("%d", num[i]);

        if (tmp > i){
            printf  ("-%d", num[tmp]);
            i = tmp;
        }

        if (i != cnt-1)
            printf (",");
    }
    NL;

    return 0;
}




/*int main(){
    char ch;
    int i, j, len, num[MAX], ind=0, ans, tmp, cnt, n, t, l;

    while (scanf ("%d %c", &ind, &ch) == 2){
        //num[ind] = 1;
        num[ind++];
        if (ch == '\n') break;
    }


    sort (num, num + ind);
//    for (i = 0; i < ind; i++) printf ("%d ", num[i]);

    t = l = num[0];

    for (i = 1; i < ind; i++){
        if (num[i] > t+1){
            tmp = t;
            if (tmp > l){
                printf ("%d-%d, ", l, tmp);
            }
            else{
                printf ("%d, ", l);
            }
            l = num[i];
        }
        t = num[i];
    }
    tmp = t;

    if (tmp > l)
        printf ("%d-%d\n", l, tmp);
    else
        printf ("%d\n", l);

    return 0;
}

*/
/*

//    while (scanf ("%d%*c", &ind) != EOF){
//        num[ind] = 1;
//    }


string sequ;
cin >> sequ;

    sort (sequ.begin(), sequ.end());
    len = sequ.length();
    for (i = 0; i < len; i++)
        if (sequ[i] >= '0' && sequ[i] <= '9')
            cout << sequ[i] << " ";
    NL;

*/


/*
int main(){
    int n, len, i, j, tmp, cnt, ans, l, r, num[MAX];
    char ch;

    CLR (num);
    scanf ("%d %c", &n, &ch);
    num[n] = 1;

    while (ch == ','){
        scanf ("%d %d", &n, &ch);
        num[n] = 1;
    }

    i = 1;
    while (num[i] == 0 && i < 1001)
        i++;

    j = i;

    while (num[j] == 1 && j < 1001)
        j++;

    j--;

    if (i - j == 0)
        printf ("%d", i);
    else
        printf ("%d-%d", i, j);

    i = j+1;

    while (i < 1001){
        while (num[i] == 0 && i < 1001)
        i++;

        if (i == 1001) break;
        j = i;

        while (num[j] == 1 && j < 1001)
            j++;
        j--;

        if (i - j == 0)
            printf ("%d", i);
        else
            printf ("%d-%d", i, j);

        i = j+1;
    }
    NL;
    return 0;
}

*/
