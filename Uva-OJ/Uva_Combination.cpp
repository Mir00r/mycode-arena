//#include <iostream>
//#include <stdio.h>
//using namespace std;
/*int main()
{
    unsigned long long m, n, i, j, temp, m1, n1;
    while(scanf("%llu %llu", &n, &m) == 2)
    {
      if(n == 0 && m == 0)
        return 0;
      if(m > (n-m))
        temp = n - m;
      else
        temp = m;
      n1 = m1 = 1;
      for(i = 0; i < temp; i++)
      {
          n1 *= (n-i); //cout<<(n-i)<<" ";
          m1 *= (i+1);
          for(j = m1; j > 1; j--)
            if(m1 % j == 0)
                if(n1 % j == 0)
                {
                    n1 /= j;
                    m1 /= j;
                }
      }
      //cout<<n1<<" "<<m1<<endl;
        printf("%llu things taken %llu at a time is %llu exactly.\n", n, m, n1);
      //cout<<n<<" things taken "<<m<<" at a time is "<<n1<<" exactly."<<endl;
    }
    return 0;
}*/

#include <stdio.h>

long double fact(int p){
    long double facts = 1;
    int i;
    for(i = 1; i <= p; i++)
        facts = facts * i;
    return(facts);
}

int ncm (int n, int m){
    return(fact(n) / (fact(m) * fact(n- m)));
}

int main(){
    int n, m; //ncm(int, int);
    //long double fact(int);
    scanf("%d %d",&n, &m);
    while (n != 0 && m != 0)
    {
        printf( "%d things taken %d at a time is %d exactly.\n",n, m, ncm(n, m));
        scanf("%d %d",&n, &m);
    }
    return 0;
}



/*#include<stdio.h>
int a, b, i;
double res;
void doComb()
{
    res = 1;
    for(i = a; i > b; i--){
        res*=i;
        res/=(i-b);
    }
}
int main(void){
    scanf("%d",&a);
    while(a)
    {
        scanf("%d",&b);
        doComb();
        printf("%d things taken %d at a time is %.0lf exactly.\n",a,b,res);
        scanf("%d",&a);
    }
    return 0;
}*/



/*#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
long double factorial (long double n)
{
    /*if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
    long double r = 1;
    for (long double i = 2; i <= n; i++)
    {
        r *= i;
    }
    return r;
}
int main ()
{
    long double m, n;
    while (scanf("%Lf %Lf", &n, &m) &&  n != 0 && m != 0)
    {
        long double r = (factorial(m))/(factorial(m-n)*factorial(n));
        printf("%Lf things taken %Lf at a time is %Lf exactly.\n", n, m, r);
        //cout << m << " things taken " << n << " at a time is " << fixed << setprecision(0) << r << " exactly." << endl;
    }
}*/
