#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 10000+100

//char str[MAX];
string str[MAX];
/*bool prefix_find(char a, char b){
    int len_a, len_b, i;
//    len_a = strlen(a); len_b = strlen(b);
    //if (len_a > len_b) return false;
    if (strlen(a) > strlen(b)) return false;
    for (i = 0; i < strlen(a); i++){
        if (a[i] != b[i]) return false;
    }
    return true;
}*/

bool prefix_find(string a, string b){
    if (b.size () < a.size ()) return false;
    for (int i = 0; i < a.length (); i++){
        if (a [i] != b [i]) return false;
    }
    return true;
}



int main(){
    int tc, n, i, j, flag;
    scanf ("%d", &tc);
    //getchar();
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++) cin >> str[i];  //scanf ("%s", str[i]);
        flag = 0;
        //int len = strlen(str);
        sort (str, str+n);
        for (i = 0; i < n; i++){
            if (prefix_find(str[i], str[i+1]) == true){
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}
