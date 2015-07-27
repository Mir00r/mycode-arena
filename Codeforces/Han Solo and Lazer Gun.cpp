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
#define MAX 1005
#define row 100
#define col 100
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)


int cordi[MAX][2], n, x, y;

int main(){
    int i, j, cnt;

    scanf ("%d %d %d", &n, &x, &y);

    for (i = 0; i < n; i++ )
        scanf ("%d %d", &cordi[i][0], &cordi[i][1]);
    cnt = 0;

    for (i = 0; i < n; i++ ){
        cnt++;
        for (j = 0; j < i; j++ ){
            if ( (cordi[j][0] - x) * (cordi[i][1] - y) == (cordi[i][0] - x) * (cordi[j][1] - y) ){
                cnt--;
                //printf ("%d\n", cnt);
                //return 0;
                break;
            }
        }
    }
    printf ("%d\n", cnt);
    return 0;
}





/*struct cordi{
    double x, y;
}pos[MAX];


int main(){
    int n, cnt=0, ans, i, j;
    double x, y;
    bool check[MAX];
    scanf ("%d %d %d", &n, &x, &y);

    for (i = 0; i < n; i++)
        scanf ("%d %d", &pos[i].x, &pos[i].y);

    for (i = 0; i < n; i++){
        if (check[i]) continue;
        cnt++;
        for (j = 0; j < n; j++){
            if ((pos[j].x - x) * (pos[i].y - y) == (pos[i].x - x) * (pos[j].y - y))
                check[j] = true;
                //cnt++;
        }
    }
    printf ("%d\n", cnt);

    return 0;
}
*/

/*int main(){
    int n, x, y, a, b, ans, i, cnt=0;
    //set <int> st;
    set <double> st;

    scanf ("%d %d %d", &n, &x, &y);
    for (i = 0; i < n; i++){
        scanf ("%d %d", &a, &b);
        if (y != b)
            st.insert ((x-a) / (y-b));
        else
            cnt = 1;
    }

    //printf ("%lf\n", st.size ()+cnt);
    cout << st.size()+cnt << endl;
    return 0;
}*/
