/*#include <stdio.h>
int day[3655];
int main()
{
    int t, no_of_party, hartal_day[150], i, j, k, no_of_day, l ,count;
    scanf("%d",&t);
    for(i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d", &no_of_day);
        scanf("%d", &no_of_party);
        for(j = 0; j < no_of_party; j++)
            scanf("%d", &hartal_day[j]);
        for(l = 0; l < no_of_party; l++)
        {
            for(k = 1; k <= no_of_day; k++)
            {
                if(k % hartal_day[l] == 0)
                    day[k-1] = 1;         //  set lost day condition
            }
        }
        for(k = 1; k <= no_of_day; k++)  // update with hartal for each party
        {
            if(k % 7 == 0 || k % 7 == 6)  // if it's not a friday or a saturday check
                day[k-1] = 0;
        }
        for(k = 1; k <= no_of_day; k++)
        {
            if(day[k-1] == 1)  // set no of lost day count
                count++;
                day[k-1] = 0;
        }
       printf("%d\n", count);
    }
    return 0;
}*/


#include <stdio.h>
int party[150];

int main()
{
    int no_of_day, no_of_party, count, t, i, j, k;
    scanf ("%d", &t);
    while (t--)
    {
        count = 0;
        scanf ("%d", &no_of_day);
        scanf ("%d", &no_of_party);
        for (i = 1; i <= no_of_party; i++)
            scanf ("%d", &party[i]);
        for (i = 1; i <= no_of_day; i++)
        {
            if (i % 7 != 0 && i % 7 != 6) // if it's not a friday or a saturday check
            {
                for (j = 1; j <= no_of_party; j++)
                {
                    if (!(i % party[j])) // set lost day condition && count
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        printf ("%d\n", count);
    }
    return 0;
}
