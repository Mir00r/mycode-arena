#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int data[20000], number, t, n, i, j, max;
    scanf ("%d", &t);
    while (t--){
        max = -1;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
            scanf("%d", &data[i]);
         //sort(data, data+n);
        for ( j = 0; j < n; j++){
            //scanf("%d",&data[j]);
            if (data[j] > max){
                    max = data[j];
                    //printf ("max = %d\n\n", max);
                    //loc = j +1;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}


