#include <stdio.h>
int main()
{
    long int x, t, i, bin, num, binbit, hexbit, hex;
    scanf("%ld", &t);
        for(i = 1; i <= t; i++)
        {
            scanf("%ld", &num);
            bin = num;
            hex = num;
            binbit = 0;
            hexbit = 0;
            while(bin != 0)
            {
                x = bin % 2;
                if(x == 1)
                    binbit++;
                    bin /= 2;
            }
            while(hex != 0)
            {
                x = hex % 10;
                if(x == 0)
                    hexbit += 0;
                else if
                    (x == 1 || x == 2 || x == 4 || x == 8)
                    hexbit += 1;
                else if
                    (x == 3 || x == 5 || x == 6 || x == 9)
                    hexbit += 2;
                else if
                    (x == 7)
                    hexbit += 3;
                hex /= 10;
            }
            printf("%ld %ld\n", binbit, hexbit);
        }
    return 0;
}


#include<stdio.h>
#include<math.h>
int DB(unsigned long long int x)
{
    unsigned long long int m[2000],n,o,p,r,q;
    o=1;
    p=0;
    m[1]=1;
    n=m[1];
    while(x>=n)
    {
        o++;
        n=pow(2,o-1);
        if(x>=n)
        m[o]=n;
    }
    r=o-1;
    while(x>=1 && r>=1)
    {
        if(x>=m[r])
        {
            x=x-m[r];
          p++;
        }
        r--;
    }
    return p;
}
int HD(unsigned long long int x)
{
    unsigned long long int m,n,o,p,j,k,l;
    p=0;
    j=0;
    while(x!=0)
    {
        m=x/10;
        n=x%10;
        p=p+(n*pow(16,j));
        x=m;
        j++;
    }
    return p;
}
int main()
{
     long long int a,b,c,d,e,f,m,g,h,t;
    scanf("%lld",&t);
    for(h=1;h<=t;h++)
    {
        scanf("%lld",&m); //  This is the right code //
        a=DB(m);
        e=HD(m);
        f=DB(e);
        printf("%lld %lld\n",a,f);
    }
    return 0;
}




/*#include<stdio.h>
int main()
{
    register long t, m, n, d, db, hb;
    //freopen("in.txt","r",stdin);
    scanf("%ld", &t);
    while(t--)
    {
        scanf("%ld", &m);
        db = hb = 0, n = m;
        while(n)
            db = db + (n&1), n = n >> 1;
        while(m)
        {
            d = m % 10;
            while(d)
                hb = hb + (d&1), d = d >> 1;
            m = m / 10;
        }
        printf("%ld %ld\n", db, hb);
    }
    return 0;
}*/
