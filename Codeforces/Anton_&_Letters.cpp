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



int main (){
    set <char> ch;
    char str[MAX];
    int len, n, cnt, ans, i, j, tmp;
//    while (cin >> str){
//        if (isalpha(str)) ch.insert (str);
//    }
//    printf ("%d\n", ch.size());

    char letter[MAX];
    gets (str);
    len = strlen (str);
    cnt = 0;
    for (i = 0; i < 26; i++)
        letter[i] = '0';
    for (i = 0; i < len; i++){
        if (str[i] == '{' || str[i] == '}' || str[i] == ',' || str[i] == ' ') continue;
        if (str[i] >= 'a' && str[i] <= 'z')
            if (letter[str[i] - 'a'] == '0'){
                letter[str[i] - 'a'] = 1;
                cnt++;
            }
    }
    printf ("%d\n", cnt);
   // printf ("%d\n", len);
    //cnt = ans = tmp = 0;
    //for (i = 0; i < len; i++){
      //  if (str[i] >= 'a' && str[i] <= 'z') ch.insert (str[i]);
        //if (isch (str))ch.insert (str);
    //}
    //printf ("%d\n", ch.size());
//    for (i = 0; i < len; i++){
//        if (str[i] >= 'a' && str[i] <= 'z')
//            //if ()
//            cnt++;
//    }
//    printf ("%d\n", cnt);
    return 0;
}
