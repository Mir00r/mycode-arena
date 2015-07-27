#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 205
#define col 205
#define MAX 1000006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007




int GCD (int a, int b){
    if (b == 0) return a;
    else return GCD(b, a%b);
}

int main(){
    int tc, cs = 1, door, i, j, arr[MAX], gcd_ans, tmp_1, tmp_2;
    scanf ("%d", &tc);
    while (tc--){
        int sum = 0;
        int neg_itm_cnt = 0;

        scanf ("%d", &door);

        for (i = 0; i < door; i++){
            scanf ("%d", &arr[i]);
            sum += abs(arr[i]);

            if (arr[i] < 0)
                neg_itm_cnt++;
        }

       // printf ("Sum = %d\n", sum);
        //printf ("Neg_itm_cnt = %d\n", neg_itm_cnt);

        if (neg_itm_cnt == door){
            printf ("Case %d: inf\n", cs++);
            continue;
        }

        gcd_ans = GCD (sum, door - neg_itm_cnt);
        tmp_1 = sum / gcd_ans;
        tmp_2 = (door - neg_itm_cnt) / gcd_ans;

        printf ("Case %d: %d/%d\n", cs++, tmp_1, tmp_2);
    }
    return 0;
}












/*
int main(){
    char sol_str[MAX], play_str[MAX];
    int i, j, round, c = 0, check, count;
    while(scanf("%d", &round) == 1 && round >= 0){
        scanf("%s", sol_str);
        scanf("%s", play_str);
        count = 0;
        printf("Round %d\n", ++c);
        for(i = 0; i < strlen(play_str); i++){
            for(j = 0; j < strlen(sol_str); j++){
                check = 0;
                if(sol_str[j] == play_str[i]){
                  sol_str[j] = '0';
                  check = 1;
                }
            }
            if(check == 0) count++;
            for(j = 0;j < strlen(sol_str); j++){
                check = 0;
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
        if(count < 7 && check == 1)
            printf("You chickened out.\n");
    }
    return 0;
}
*/
