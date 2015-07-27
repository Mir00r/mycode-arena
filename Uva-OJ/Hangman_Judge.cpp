#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 10000+10

int main(){
    char sol_str[MAX], play_str[MAX];
    int i, j, round, c = 0, check, count;
    while(scanf("%d", &round) == 1 && round != -1){
        scanf("%s", sol_str);
        scanf("%s", play_str);
        count = 0;
        printf("Round %d\n", round);
        for(i = 0; i < strlen(play_str); i++){
            for(j = 0, check = 0; j < strlen(sol_str); j++){
                //check = 0;
                if(sol_str[j] == play_str[i]){
                  sol_str[j] = '0';
                  check = 1;
                }
            }
            if(check == 0) count++;
            for(j = 0, check = 0; j < strlen(sol_str); j++){
                //check = 0;
                if(sol_str[j] != '0'){
                    check = 1;
                    break;
                }
            }
            if(check == 0){
                printf ("You win.\n");
                break;
            }
            if(count == 7){
                printf("You lose.\n");
                break;
            }
        }
        if(count < 7 && check == 1) printf("You chickened out.\n");
    }
    return 0;
}



/*int main(){
    int round, t = 0, i, j, check, count;
    char sol_str[MAX], play_str[MAX];
    while (scanf ("%d", &round) == 1 && round >= 0){
        //check =  count = 0;
        scanf("%s",sol_str);
        scanf("%s",play_str);
        printf ("Round %d\n", ++t);
        for (i = 0; i < strlen(play_str); i++){
            for (j = 0; j < strlen(sol_str); j++){
                check = 0;
                if (sol_str[j] == play_str[i]){
                    sol_str[j] = '0';
                    check = 1;
                }
            }
            if (check == 0) count++;
            for (j = 0; j < strlen(sol_str); j++){
                check = 0;
                if (sol_str[j] != '0'){
                    check = 1;
                    break;
                }
            }
            if (check == 0){
                printf ("You win.");
                break;
            }
            if (count == 7){
                printf ("You lose.");
                break;
            }
        }
        if (count < 7 && check == 1) printf ("You chickened out.");
    }
    return 0;
}*/
