#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define row 20
#define col 20
#define MAX 50
#define memo(array, value) memset (array, value, sizeof (array))


int main (){
    int m, n, tc, cs=1, i, j, cnt, tmp, ans;
    int x[MAX], y[MAX];
    int a[row][col], b[row][col];
    //char x[MAX], y[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &m);
        for (i = 1; i <= 4; i++)
            for (j = 1; j <= 4; j++) scanf ("%d", &a[i][j]);
        scanf ("%d", &n);
        for (i = 1; i <= 4; i++)
            for (j =1; j <= 4; j++) scanf ("%d", &b[i][j]);
        memo (x, 0);
//        //memo (y, 0);
//        for (i = m; i <= m; i++)
//            for (j = 1; j <= 4; j++) x[j] = a[i][j] + '48';
//        //for (i = 1; i <= 4; i++) printf ("%d ", x[i]);
//        for (i = n; i <= n; i++)
//            for (j = 1; j <= 4; j++) y[j] = b[i][j] + '48';
//        //for (i = 1; i <= 4; i++) printf ("%d ", y[i]);
        cnt = 0;
        for (i = 1; i <= 4; i++){
            if (a[m][i] == b[n][i]){
                ans = a[m][i];
                x[cnt++] = a[m][i];
                //cnt++;
               // printf ("Case %d: %d\n", cs++, ans);
                //break;
            }
//            else if (a[m][i] == b[n][i] && a[m][i+1] == b[n][i+1]){
//                printf ("Case %d: Bad magician!\n", cs++);
//                break;
//            }
//            else{
//                printf ("Case %d: Volunteer cheated!\n", cs++);
//                break;
//            }
        }
        printf ("SIZE = %d\n", cnt);
        if (cnt == 1) printf ("Case %d: %d\n", cs++, x[cnt]);
        else if (cnt > 1) printf ("Case %d: Bad magician!\n", cs++);
        else printf ("Case %d: Volunteer cheated!\n", cs++);
    }
    return 0;
}
