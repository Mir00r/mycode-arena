#include <stdio.h>
#include <string.h>

int main (){
    int i, j, k, sum1, sum2, t, temp, len1, len2;
    char team[30], judge[30];
    scanf ("%d", &t);
    getchar();
    for (i = 1; i <= t; i++){
        sum1 = 0;
        sum2 = 0;
        gets(team);
        gets(judge);
        len1 = strlen(team);
        for(j = 0; j < len1; j++)
            if(team[j]!=' ')
                sum1 += team[j];

        len2 = strlen(judge);
        for(j = 0; j < len2; j++)
            if(judge[j]!=' ')
                sum2 += judge[j];
        if (sum1 != sum2)
            printf ("Case %d: Wrong Answer\n", i);
        else if (strcmp(team , judge) == 0)
            printf ("Case %d: Yes\n", i);
        else
            printf ("Case %d: Output Format Error\n", i);
    }
    return 0;
}
