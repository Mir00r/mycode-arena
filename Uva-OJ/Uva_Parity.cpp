#include<stdio.h>
#include <string.h>
int main(){
    long long int a, j, count, temp, num, bin_num;
    char bin[100000];
    scanf ("%lld",&a);
    while(a != 0){
        num = 0;
        count = 0;
        bin_num = 0;
        while(a != 0){
            temp = a % 2;
            bin[num] = temp;
            a = a / 2;
            num++;
            if (temp == 1)
                count++;
        }
        for (j = num - 1; j >= 0; j--)
             bin[j] = '\0';
            //printf ("%lld", bin_num);
        printf ("The parity of %lls is %lld (mod 2).\n", bin, count);
        scanf ("%lld",&a);
    }
    return 0;

}





/*#include <stdio.h>
#include <string.h>
int main()
{
    long long int n,b,t,j;
    while(scanf("%llu",&n) && n)
    {
        char a[2000]={0},c[2000]={0};
        b=0;
        int k=0;
        while(n>0)
        {
            a[b++]=(n%2)+48;
            if(n%2==1)
            k++;
            n=n/2;
        }
        a[b]='\0';
        j=strlen(a)-1;
        for(b=j,t=0;b>=0;b--)
            c[t++]=a[b];
            c[t]='\0';

        printf("The parity of %s is %d (mod 2).\n",c,k);
    }
    return 0;
}*/
