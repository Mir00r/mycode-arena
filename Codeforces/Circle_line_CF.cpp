#include <stdio.h>
#define N 100+20

int main ()
{
    int ck1, ck2, a[N], n, s, t, ti, temp, i, sum = 0;
    while (scanf ("%d",&n) == 1){
        for (i=1;i<=n;i++){
            scanf ("%d",&a[i]);
            sum += a[i];
        }
        scanf ("%d%d",&s,&t);
        if (s >= t){   // in c++ swap(s, t);
            temp = t;
            t = s;
            s = temp;
        }
        ck1 = ck2 = 0;
        for (i = s; i < t; i++)
            ck1 += a[i];
            ck2 = sum - ck1;
         /*do{
            ck2 += a[ti];
            if (n == ti)
                ti %= n;
                ti++;
         }while (ti!=s);*/

         if(ck1 < ck2)   // 		cout<<min(ck1,ck2)<<endl;
            printf ("%d\n",ck1);
         else
            printf ("%d\n",ck2);
    }
    return 0;
}
