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
#define MAX 100002
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001

//char str[row][col];
//char alcohol[50][50] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM",
//                        "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE",
//                        "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
//                        "11", "12", "13", "14", "15", "16", "17"};


string alcohol[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM",
                        "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE","0",
                        "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
                        "11", "12", "13", "14", "15", "16", "17"};


int main(){
    int i, j, k, n, cnt, len, tmp, num;
    string  str;

    scanf ("%d", &n);
    cnt = 0;

    for (i = 1; i <= n; i++){
       // scanf ("%s", str[i]);
        cin >> str;

    //bool check = false;

    //for (i = 1; i <= n; i++ ){
        for (j = 0; j < 29; j++){
            if (str == alcohol[j])
                cnt++;
        }
    }

    printf ("%d\n", cnt);

    return 0;
}


/*
    for (i = 0; i < n; i++){

        //if (str[i] >= 'A' && str[i] <= 'Z'){
            for (k = 0; k < 12; k++){
                if (str[i] == alcohol[0][k]){
                    //puts ("ok");
                    cnt++;
                    check = true;
                    break;
                }
            }
        //}

        if (!check && str[0] <= '9'){
            num = atoi (str);
        //  printf ("NUm = %d\n", num);
            if (num < 18){
                //puts ("check");
                cnt++;
                //break;
            }
        }
     }

*/
