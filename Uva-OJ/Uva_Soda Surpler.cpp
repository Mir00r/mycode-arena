# include <stdio.h>
int main()
{
    int temp, mod, sum, t, val, i, e, f, c;
    scanf("%d", &t);
    for(i = 1;i <= t; i++)
   {
        scanf("%d %d %d", &e, &f, &c);
        sum = 0;
        temp = e + f;
        while(temp >= c)
        {
          mod = temp % c;
          //printf ("Mod = %d\n", mod);
          val = temp / c;
          //printf ("Val = %d\n", val);
          sum += val;
          //printf ("Sum = %d\n", sum);
          temp = val + mod;
          //printf ("temp = %d\n", temp);
        }
         printf("%d\n",sum);
    }
    return 0;
}
