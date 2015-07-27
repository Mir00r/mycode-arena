#include <stdio.h>
#include <string.h>
#define MAX 20000

int i, j;
bool flag;
char team_str[MAX][MAX], judge_str[MAX][MAX], t_str[MAX], j_str[MAX];
int inc = 0, k = 0;
int main(){
    int m, n, c = 0, team_len, judge_len, team_sum, judge_sum;
    while (scanf ("%d", &n) == 1 && n){
        getchar();
        for (i = 0; i < n; i++)
            gets(team_str[i]);
            //scanf ("%s", team_str[i]);
        scanf ("%d", &m);
        getchar();
        for (j = 0; j < m; j++)
            gets(judge_str[j]);
            //scanf ("%s", judge_str[j]);
        if (n == m){
            flag = true;
            for (i = 0; i < n; i++)
                if (strcmp (team_str[i], judge_str[i]) == 0){
                    flag = false;
                    break;
                }
                if (flag == true){
                    printf ("Run #%d: Accepted\n", ++c);
                    break;
                }
        }
        for (i = 0; i < n; i++){
            team_len = strlen(team_str[i]);
            for (j = 0; j < team_len; j++)
                if ('0' <= team_str[i][j] && team_str[i][j] <= '9')
                    t_str[inc++] = team_str[i][j];
        }
        t_str[inc] = 0;
        for (i = 0; i < n; i++){
            judge_len = strlen(judge_str[i]);
            for (j = 0; j < judge_len; j++)
                if ('0' <= judge_str[i][j] && judge_str[i][j] <= '9')
                    j_str[k++] = judge_str[i][j];
        }
        j_str[k] = 0;
        if (strcmp (t_str, j_str) != 0)
            printf ("Run #%d: Presentation Error\n", ++c);
        else
            printf ("Run #%d: Wrong Answer\n", ++c);
    }
    return 0;
}

/*int i, j;
bool flag;
int main(){
    int m, n, c=0, team_len, judge_len, team_sum, judge_sum;
    char team_str[MAX], judge_str[MAX];
    while(scanf ("%d", &n) == 1 && n){
        //getchar ();
        team_sum = judge_sum = 0;
        for (i = 0; i < n; i++){
            scanf ("%s", &team_str[i]);
            //gets(team_str[i]);
            team_len = strlen(team_str);
        }
        for (i = 0; i < team_len; i++)
            if (team_str[i] != ' ')
                team_sum += team_str[i];
        scanf ("%d", &m);
        //getchar ();
        for (j = 0; j < m; j++){
            scanf ("%s", &judge_str[j]);
            //gets(judge_str[j]);
            judge_len = strlen(judge_str);
        }
        for (j = 0; j < judge_len; j++)
            if (judge_str[j] != ' ')
                judge_sum += judge_str[j];
        //if (team_sum != judge_sum)
            //printf ("Run #%d: Wrong Answer\n", ++c);
        if (n == m){
            for (i  = 0; i < n; i++)
                if (strcmp (team_str, judge_str) == 0){
                    flag = true;
                    break;
                }
                if (flag == true){
                    printf ("Run #%d: Accepted\n", ++c);
                    break;
                }
        }
        else
            printf ("Run #%d: Presentation Error\n", ++c);
    }
    return 0;
}*/
