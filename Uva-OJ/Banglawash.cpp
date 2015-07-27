#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define L long int
#define LL long long int
#define ULL unsigned long long
#define MAX 50
#define row 25
#define col 20

int main(){
    int tc, cs=1, i, j, n, len;
    scanf ("%d", &tc);
    while(tc--){
        string str;
        scanf ("%d", &n);
        cin >> str;
        len = str.size();
        int b = 0, w = 0, a = 0, t = 0;
        for(i = 0; i < len; i++){
            if(str[i] == 'B') b++;
            else if(str[i] == 'W') w++;
            else if(str[i] == 'T') t++;
            else if(str[i] == 'A') a++;
        }
        if((b+a == n || b == n) && a != n)
            printf("Case %d: BANGLAWASH\n", cs++);
        else if((w == n || w+a == n) && a != n)
            printf("Case %d: WHITEWASH\n", cs++);
        else if(a == n)
            printf("Case %d: ABANDONED\n", cs++);
        else if(b == w)
            printf("Case %d: DRAW %d %d\n", cs++, b, t);
        else if(b > w)
            printf("Case %d: BANGLADESH %d - %d\n", cs++, b, w);
        else if(b < w)
            printf("Case %d: WWW %d - %d\n", cs++, w, b);
    }
    return 0;
}








/*int main(){
    int tc, cs=1, n, i, j, cnt, tmp, len, b_wash, w_wash, draw, aban, w_w_w;
    char str[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++) scanf (" %c", &str[i]);
        len = strlen (str);
        b_wash = 0; w_wash = 0; draw = 0; aban = 0;
        for (i = 0; i < len; i++){
            if (str[i] == 'B') b_wash++;
            else if (str[i] == 'W') w_wash++;
            else if (str[i] == 'T') draw++;
            else if (str[i] == 'A')aban++;
        }
        printf ("Case %d: ", cs++);
        if ((b_wash == n || b_wash + aban == n) && aban != n) puts ("BANGLAWASH");
        else if ((w_wash == n || w_wash + aban == n) && aban != n) puts ("WHITEWASH");
        else if (aban == n) puts ("ABANDONED");
        else if (b_wash == w_wash) printf ("DRAW %d %d\n", b_wash, draw);
        else if (b_wash > w_wash) printf ("BANGLADESH %d - %d\n", b_wash, w_wash);
        else if (w_wash > b_wash)printf ("WWW %d - %d\n", w_wash, b_wash);
    }
    return 0;
}*/
