#include <stdio.h>

int main (){
    int t, length, train[50], i, j, k, temp, count;
    scanf ("%d", &t);
    for (i = 0; i < t; i++){
        temp = 0;
        count = 0;
        scanf ("%d", &length);
        for (j = 0; j < length; j++)
            scanf ("%d", &train[j]);
        for (j = 0; j < length - 1; j++){
            for (k = 0; k < length - 1; k++){
                if (train[k] > train[k + 1]){
                    temp = train[k];
                    train[k] = train[k + 1];
                    train[k + 1] = temp;
                    count++;
                }
            }
        }
        printf ("Optimal train swapping takes %d swaps.\n", count);
    }
    return 0;
}
