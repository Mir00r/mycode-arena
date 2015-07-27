#include<stdio.h>

int getcount( int n){
    int count = 1;
    while(1){
        if(n == 1)
        break;

        if((n%2)!= 0)
            n = 3*n + 1;
        else n = n/2;
            count++;
    }
    return count;
}

int main(){
    int a, b, max, temp, i;
    while(scanf("%d %d",&a,&b) == 2){
        max = 1;
        if (a > 0 && b < 1000000){
            if (a<b){
                for(i = a; i <= b; i++){
                    temp = getcount(i);
                    if(max < temp)
                    max = temp;
                }
                printf("%d %d %d\n",a, b, max);
            }
            else{
                for(i = b; i <= a; i++){
                    temp = getcount(i);
                    if(max < temp)
                    max = temp;
                }
                printf("%d %d %d\n",a, b, max);
            }
        }
    }
    return 0;
}


