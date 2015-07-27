#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define pb push_back
#define MAX 100000+5
#define row 10
#define col 10

bool adj_list[row][col];
char str[MAX];
char ans[MAX];

//int ans[MAX];

void init (){
    adj_list[0][1] = true; adj_list[1][2] = true;

    adj_list[2][3] = true; adj_list[3][4] = true;

    adj_list[4][0] = true; adj_list[4][9] = true;

    adj_list[3][8] = true; adj_list[2][7] = true;

    adj_list[1][6] = true; adj_list[0][5] = true;

    adj_list[5][7] = true; adj_list[5][8] = true;

    adj_list[9][6] = true; adj_list[6][8] = true;
    adj_list[7][9] = true;
}


bool find_path(char *str, int v){
    int i, ln, sr, ds;
    ans[0] = v +'0';
    for(i = 1; str[i]; i++){
        sr = str[i] - 'A';
        ds = str[i] - 'A' + 5;

        if(adj_list[v][sr] == true || adj_list[sr][v] == true)
            v = sr;
        else if(adj_list[v][ds] == true || adj_list[ds][v] == true)
            v = ds;
        else
            return false;

        ans[i] = v + '0';
    }
    return true;
}



int main(){
    init();
    int tc, sr, ds;
    scanf("%d", &tc);
    while(tc--){
        scanf("%s", str);
        memset(ans, 0, sizeof(ans));

        sr = str[0] - 'A';
        ds = str[0] - 'A' + 5;
        //printf ("sr = %d   ds = %d\n", sr);

        if(find_path(str, sr) == true || find_path(str, ds) == true)
            puts(ans);
        else
            puts("-1");
    }
    return 0;

}






/*
bool find_path (char *str, int val){
    int ln, i, j, sr;
    //ln = strlen (ch);
    ans[0] = val + '0';
    //ans[0] = val;
    for (i = 1; i <= str[i]; i++){
        if (adj_list[val][ str[i] -'A' ] == true || adj_list[ str[i] -'A' ][val] == true)
            val = str[i] - 'A';
        else if (adj_list[val][ str[i] -'A' + 5 ] == true || adj_list[ str[i] -'A' + 5 ][val] == true)
            val = str[i] - 'A' + 5;
        else
            return false;
        ans [i] = val + '0';
        //ans[i] = val;
    }

    return true;
}

int main(){
    init();
    int tc, len, sr, ds;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s ", str);
        memset (ans, 0, sizeof (ans));

        sr = str[0] - 'A';
        ds = str[0] - 'A' + 5;
        printf ("sr = %d   ds = %d\n", sr);
        //len = strlen (str);

        if (find_path (str, sr) == true || find_path (str, ds) == true)
            puts (ans);
            //printf ("%d\n", ans);
        else
            puts ("-1");
    }
    return 0;
}*/



