/*#include <stdio.h>

int main()
{
    int t, i, day1, month1, year1, age, day2, month2, year2;
    char sign1, sign2;
    scanf ("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf ("%d%c%d%c%d", &day1, &sign1, &month1, &sign1, &year1);
        scanf ("%d%c%d%c%d", &day2, &sign2, &month2, &sign2, &year2);
        if (year1 == year2)
        {
            printf ("Case #%d: Invalid birth date\n", i+1);
        }
        else if (year1 - year2 > 130 || year2 - year1 > 130)
        {
            printf ("Case #%d: Check birth date\n", i+1);
        }
        else if (year1 > year2)
        {
            age = year1 - year2;
            printf ("Case #%d: %d\n", i+1, age);
        }
        else if (year1 < year2)
        {
            age = year2 - year1;
            printf ("Case #%d: %d\n", i+1, age);
        }
        else
        {
            printf ("Case #%d: 0\n", i+1);
        }
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int t, i, day1, month1, year1, age, day2, month2, year2;
    char sign1, sign2, sign3, sign4;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%c%d%c%d",&day1,&sign1,&month1,&sign2,&year1);
        scanf("%d%c%d%c%d",&day2,&sign3,&month2,&sign4,&year2);

        age = year1-year2;
        if(year1 > year2)
        {
            if(year1 - year2 > 131)
                printf("Case #%d: Check birth date\n",i);
            else if((year1 - year2) == 131 && (month1 == month2) && (day1 >= day2))
                printf("Case #%d: Check birth date\n",i);
            else
            {
                if(month1 > month2)
                    printf("Case #%d: %d\n", i, age);
                else if(month1 < month2)
                    printf("Case #%d: %d\n", i, age-1);
                else if(month1 == month2)
                {
                    if(day1 >= day2)
                        printf("Case #%d: %d\n", i, age);
                    else if(day1 < day2)
                        printf("Case #%d: %d\n", i, age-1);
                }
            }
        }
        else if(year1 == year2)
        {
            if(month1 > month2)
                printf("Case #%d: 0\n",i);
            else if((month1 == month2) && (day1 < day2))
                printf("Case #%d: Invalid birth date\n",i);
            else if(month1 < month2)
                printf("Case #%d: Invalid birth date\n",i);
            else if(month1 == month2)
            {
                if(day1 >= day2)
                    printf("Case #%d: %d\n",i,0);
                else if(day1 < day2)
                    printf("Case #%d: Invalid birth date\n",i);
            }
        }
        else
            printf("Case #%d: Invalid birth date\n",i);
    }
    return 0;
}
