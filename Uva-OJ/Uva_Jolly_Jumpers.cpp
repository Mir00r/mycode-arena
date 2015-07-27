#include <stdio.h>
#define max 3030

int a[max];
int main(){
    int n, diff, i, flag, b[max];
    while (scanf ("%d", &n) == 1){
        flag = 0;
        int b[max]={0};
        scanf ("%d", &a[1]);
        for (i = 2; i <= n; i++){
            scanf ("%d", &a[i]);
            diff = a[i] - a[i - 1];
            //printf ("diff = %d\n", diff);
            if (diff < 0)
                diff *= -1;
            b[diff] = 1;
        }
        for (i = 1; i <= n - 1; i++)
            if (b[i] != 1){
                flag = 1;
                break;
            }
        if (flag == 0)
            printf ("Jolly\n");
        else
            printf ("Not jolly\n");
    }
    return 0;
}

