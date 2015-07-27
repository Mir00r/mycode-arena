#include <stdio.h>

int main(){
    int L, H, S, V, x, y, i, max, first_value;
    scanf ("%d%d", &L, &H);
    while (L != 0 && H != 0){
        if (L < H){
            x = L;
            y = H;
        }
        else{
            x = H;
            y = L;
        }
        max = 0;
        for (i = x; i <= y; i++){
            V = i;
            S = 1;
            do//while (V > 1){
                if (V % 2 == 0)
                    V = V / 2;
                else
                    V = 3 * V + 1;
                S++;
            }while(V > 1);
            if (max < S){
                max = S;
                first_value = i;
            }
        }
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n",x, y, first_value, max-1);
        scanf ("%d%d", &L, &H);
    }
    return 0;
}
/*#include<stdio.h>

int getcount(long long int n)
{
    int count = 1;
    while(1)
    {
        if(n == 1)
            break;
        if((n%2)!= 0)
            n = 3*n + 1;
        else n = n/2;
            count++;
    }
    return count;
}

int main()
{
    int L, H, S, V, i, V, array[10000];
    scanf("%d %d",&L, &H);
    while(L != 0 && H != 0)
    {
        S = 0;
        if (L < H)
        {
            for(i = L; i <= H; i++)
            {
                V = getcount(i);
                if(S < V){
                    S = V;
                    V = i;
                }
            }
            //printf("%d %d %d\n",a, b, S);
        }
        else
        {
            for(i = H; i <= L; i++)
            {
                V = getcount(i);
                if(S < V){
                    S = V;
                    V = i;
                }
            }
            //printf("%d %d %d\n",a, b, S);
        }
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n",L, H, V, S-1);
        scanf("%d %d",&L, &H);
    }
    return 0;
}*/




/*#include <stdio.h>

long long int count = 0;
int ackermann (int L, int H)
{
    count++;
    if (L == 0)
        return (H+1);
    else if (H == 0)
        return ackermann(L - 1, 1);
    else
        return ackermann(L - 1, ackermann(L, H-1));
}

int main()
{
    long long int L, H, V, S;
    scanf ("%lld%lld", &L, &H);
    while (L != 0 || H != 0)
    {
        long int result = ackermann(L, H);
        printf ("%ld %lld\n", result, count);
        /*if (L < 0 && H < 0)
            printf ("0\n");
        else
            printf ("%lld %lld\n", ackermann(L, H));
        scanf ("%lld%lld", &L, &H);
    }
    return 0;
}*/

