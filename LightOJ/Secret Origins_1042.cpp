#include <stdio.h>

int main(){
      long n, i, p, r, q, y, z;
      scanf("%ld",&n);
      i = 0;
    while(n){
            i++;
            scanf("%ld",&p);
            r = 0;
            y = p;
            z = 1;
           while(1)
           {
                p = y;
                q = 0;
           while(p > 0)
           {
                if(p % 2 == 1)
                {
                    if(z == 1)
                        r++;
                    else
                        q++;
                }
                p /= 2;
           }
           if(q == r)
            break;
                y++;
                z=0;
           }
           printf("Case %ld: %ld\n",i,y);
           n--;
    }
    return 0;
}
