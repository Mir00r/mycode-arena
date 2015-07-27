#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 1005

typedef pair <int, int> jora;
map <jora, jora> mp;


int main(){
    int n, m, id, attr, val, prio, i, j, cnt, ans, check, tmp;
    while (scanf ("%d %d", &n, &m) == 2){
        //jora key, vlu;
        for (i = 0; i < n; i++){
            scanf ("%d %d %d %d", &id, &attr, &val, &prio);
            jora key, vlu;
            key = jora (id, attr);
            vlu = jora (val, prio);
            //printf ("F_Key = %d   F_Vlu = %d\n", key.first, vlu.first);
            //printf ("S_Key = %d   S_Vlu = %d\n", key.second, vlu.second);

            if (vlu.second >= mp[key].second)
                mp[key] = vlu;
        }
        for (i = 0; i < m; i++){
            scanf ("%d %d", &id, &attr);
            ans = mp[jora(id, attr)].first;
            printf ("%d\n", ans);
        }
    }
    return 0;
}



/*struct node{
    int id, attr, val, priority, flag;
}arr[MAX];

bool cmp (node a, node b){
    //if (a.val == b.val) return a.val < ;
    return a.val < b.val;
}


int main(){
    int n, m, i, j, tmp, cnt, ans, check, sije;
    int ID, ATTR;
    while (scanf ("%d %d", &n, &m) == 2){
        sije = 0;
        for (i = 0; i < n; i++){
            scanf ("%d", &arr[sije++].id);
            scanf ("%d", &arr[sije++].attr);
            scanf ("%d", &arr[sije++].val);
            //arr[sije++].flag = 1;
            scanf ("%d", &arr[sije++].priority);
            //arr[sije++].flag = 2;
        }
       // sort (arr, arr+sije, cmp);
        //printf ("res = %d\n", arr[sije-1].val);
        for (i = 0; i < m; i++){
            scanf ("%d %d", &ID, &ATTR);
            tmp = arr[sije].id
        }
    }
    return 0;
}*/
