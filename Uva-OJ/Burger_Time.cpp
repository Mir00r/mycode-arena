#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 100000+10

int n;
//char str[MAX];
string str;

int main(){
    int i, j, dis_cnt, flag, tmp, maxn, minv, last_D, last_R, ans;
    //getchar();
    while (scanf ("%d", &n) == 1){
        //getchar();
        if (n == 0) break;
        last_D = last_R =-1;
        dis_cnt = 0;
        minv = MAX;
        cin >> str;
        for (i = 0; i < n; i++){
            //scanf (" %c", &str[i]);
            //cin >> str[i];
            if (str[i] == '.') continue;
            else if (str[i] == 'Z'){
                minv = 0;
                break;
            }
            else if (str[i] == 'D'){
                last_D = i;
                if (i - last_R < minv && last_R != -1) minv = i - last_R;
            }
            else{
                last_R = i;
                if (i - last_D < minv && last_D != -1) minv = i - last_D;
            }
        }
        printf ("%d\n", minv);
    }
    return 0;
}
