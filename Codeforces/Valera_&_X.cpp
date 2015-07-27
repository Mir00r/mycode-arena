#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 305
#define row 305
#define col 305

int main(){
    int n, i, j, tmp, cnt, check, ans;
    char str[row][col];
    scanf ("%d", &n);
    check = 0;
    for (i = 1; i <= n; i++) scanf ("%s", str[i]);
    for (i = 1; i <= n; i++)
        if (str[1][0] != str[i][i-1] || str[1][0] != str[i][n-i]){
            check = 1; break;
        }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (i != j && i != n+1-j)
                if (str[1][0] == str[i][j-1] || str[i][j-1] != str[2][0]){
                    check = 1; break;
                }
    if (check == 0) puts ("YES");
    else puts ("NO");
    return 0;
}

/*int main(){
    int n, i, j, tmp, cnt, ans;
    char str[row][col];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) scanf ("%s", str[i]);
    bool check = 0; cnt = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            //tmp = (i+j) % 2;
            if (i == j && str[i][j] == 'x'){
                //check = 1;
                //puts ("NO");
               // break;
               str[i][j] = 1;
            }
            //puts ("NO");
            //else puts ("YES");
        }
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (str[i][j] == 'x')cnt++;
    if (!cnt) puts ("YES");
    else puts ("NO");
    return 0;
}
*/
