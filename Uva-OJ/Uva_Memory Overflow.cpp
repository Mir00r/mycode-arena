#include <stdio.h>

int main (){
    int t, n, k, i, j, c, count, rem;
    char str[1001]={0};
    scanf ("%d", &t);
    for (i = 1; i <= t; i++){
        count = 0;
        scanf ("%d%d%s", &n, &k, &str);
        //getchar();
        for (j = 1; j <= n; j++){
            //scanf ("%s", &str);
        //for (j = 1; j <= n; j++)
            rem = j - k;
            for (c = j-1; c >= rem; c--){
                if (str[j] == str[c]){
                    count++;
                    break;
                }
            }
        }
        printf ("Case %d: %d\n", i, count);
    }
    return 0;
}
