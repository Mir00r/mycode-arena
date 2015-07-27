/*#include<stdio.h>
int main()
{
        printf("The 1500'th ugly number is 859963392.\n");
        return 0;
}*/

#include<stdio.h>
int p;
int q;
int r;
int ugly[1501]={0};
int main()
{
    int P,Q,R;
    ugly[0]=1;
    p=q=r=0;
    int i=1;
    while(ugly[1499]==0)
    {
        P=(ugly[p])*2;
        Q=(ugly[q])*3;
        R=(ugly[r])*5;
        if((P<Q)&&(P<R))
        {
            ugly[i]=P; i++...
