#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 99999

int main(){
    char str[MAX], tmp_str[MAX], ch, st;
    LLI n, div, temp, num, len, diff, call_reverse;
    while (scanf ("%s", str) == 1){
        //memset(tmp_str, 0, sizeof(tmp_str));

        len = strlen(str);
        sort(str, str+len);
        strcpy(tmp_str, str);
        reverse(tmp_str, tmp_str + len);
        num = atol(tmp_str);

        if (str[0] == '0')  // if exist trilling zero
            for (int i = 0; i < len; i++){
                if (str[i] != '0'){
                    ch = str[i];
                    str[i] = '0';
                    str[0] = ch;
                    call_reverse = atol(str);
                    break;
                }
            }
        else
            call_reverse = atoi(str);

        diff = num - call_reverse;
        div = diff / 9;
        printf ("%lld - %lld = %lld = 9 * %ld\n", num, call_reverse, diff, div);
        //memset(str, 0, sizeof(str));
    }
    return 0;
}


/*ll reverse_num(ll x){
    ll reverse = 0;
    while(x != 0){
            reverse *= 10;
            reverse += x%10;
            x /= 10;
        }
    return reverse;
}
int main(){
    char str[MAX], tmp_str[MAX], c, b;
    ll n, div, temp, num, len, diff, call_reverse;
    while (scanf ("%s", str) == 1){
        len = strlen(str);
        sort(str, str+1);
        strcmp(tmp_str, str);
        tmp_str[MAX] = str;
        if (tmp_str[0] == '0')
            for (int i = 0; i < len; i++){
                if (tmp_str[i] != 0)
                {
                    c = tmp_str[i];
                    tmp_str[i] = '0';
                    tmp_str[0] = c;
                    //swap(tmp_str[0], tmp_str[i]);
                    break;
                }
            }
        /*if (tmp_str[0] == '0')
            for (int i = 0; i < len; i++){
                if (tmp_str[0] != 0){
                    swap(tmp_str[0], tmp_str[i]);
                    break;
                }
            }*/
        /*num = atoi(str);
        //ll new_num = atoi(tmp_str);
        call_reverse = reverse_num(num);
        if (num < call_reverse)
            swap(num, call_reverse);
        diff = num - call_reverse;
        div = diff / 9;
        printf ("%lld - %lld = %lld = 9 * %lld\n", num, call_reverse, diff, div);
    }
    return 0;
}*/

