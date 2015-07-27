#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <set>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1005
#define LLI __int64
#define row 10
#define col 10

/*int matrix[row][col];
char ch[row][col];
int num[row] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int main (){
    int i, j, tmp, sum, ans, cnt, check;
    tmp = ans = sum = cnt = 0;
    char str[15];
    //for (i = 0; i < 3; i++) scanf ("%s", ch[i]);
    //scanf ("%s%s%s", str[0], str[3], str[6]);
    gets (str);
    gets (str+3);
    gets (str+6);
    for (i = 0; i < 4; i++)
        if (str[i] != str[8-i]){
            puts ("NO");
           // break;
            return 0;
        }
        puts ("YES");
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++){
//            matrix[i][j] = num[cnt];
//            cnt++;
//        }
////        for (i = 1; i <= 3; i++)
////        for (j = 1; j <= 3; j++) printf ("%d ", matrix[i][j]);
//    for (i = 0; i < 3; i++) scanf ("%s", ch[i]);
//    for (i = 0; i < 3; i++){
//        for (j = 0; j < 3; j++){
//            if (ch[i][j] == '.') continue;
//            else{
//                sum += matrix[i][j];
//                ans = sum;
//                ch[i][j] = '.';
//            }
//        }
//    }
//    printf ("%d\n", ans);
//    printf ("%d\n", sum);
    return 0;
}*/
    char ch[row], str[row];
int sort_korlam (int ln){
    int i, j;
    char trash;
    for (i = 0; i < ln-1; i++)
        for (j = 0; j < ln-1; j++)
            if (ch[j] > ch[j+1]){

            }
}

int main(){
    int len, i, j, tmp, cnt, ans;
    sacnf ("%s%s", ch, str);
    len = strlen (ch);

    return 0;
}
