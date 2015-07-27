#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 105

int main(){
    int len[7], leg, head, h,  body, b, i, j, cnt, tmp, check, ans, sub;
    for (i = 0; i < 6; i++) scanf ("%d", &len[i]);
    //sort (len, len+6);
    h = b = cnt = tmp = sub = 0;
    leg = 0;
    //tmp = len[0];
//    for (i = 0; i < 6; i++){
//        tmp = len[i];
//        sub = abs (tmp - len[i]);
//        if (tmp == len[i] && sub == 0) leg++;
//        if (tmp != len[i] && sub == 1){
//            head = len[i];
//            h++;
//        }
//        if (tmp != len[i] && sub >= 1){
//
//        }
//    }
    for (i = 0; i < 6; i++){
        tmp = i;
        sub = abs (len[i] - len[tmp+1]);
        if (len[i] == len[tmp+1] && sub == 0) leg++;
        if (len[i]  len[tmp+1] && sub == 1){
            head = len[i];
            h++;
        }
        if (len[i] != len[tmp+1] && sub > 1){
            body = len[i];
            b++;
        }
    }
    if (leg == 4 && head < body) puts ("Bear");
    else if (leg == 4 && head >= body) puts ("Elephant");
    else puts ("Alien");
    return 0;
}
