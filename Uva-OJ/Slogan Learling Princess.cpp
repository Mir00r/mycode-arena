#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long  long int
#define MAX 200

//string slogan_1[MAX], slogan_2[MAX], q_slogan[MAX];
//char ch;
/*int main(){
    int n, q, i, j, k, tmp, cnt;
    string slogan_1[MAX], slogan_2[MAX];
    string q_slogan[MAX];
    char ch;
    //getchar();
    while (scanf ("%d", &n) == 1){
        ch = getchar();
        for (k = 0; k < n; k++){
            getline (cin, slogan_1[k]);
            getline (cin, slogan_2[k]);
            //scanf ("%s", slogan_1[k]);
            //scanf ("%s", slogan_2[k]);
        }
        scanf ("%d", &q);
        ch = getchar();
        for (i = 0; i < q; i++){
            //scanf ("%s", q_slogan[i]);
            getline (cin, q_slogan[i]);
            for (j = 0; i < n; j++){
                if (q_slogan[i] == slogan_1[j]){
                   // printf ("%s", slogan_2[j]);
                    cout << slogan_2[j] << endl;
                    break;
                }
            //printf ("\n");
            }
        }
    }
    return 0;
}*/


int main(){
    int n, q, i, j, k;
    //char ch, s1[MAX], s2[MAX];
    string s1[MAX],s2[MAX];
    scanf("%d", &n);
    string s[MAX];
    char ch;
    ch = getchar();
    for(k = 0; k < n; k++){
        getline(cin,s1[k]);
        getline(cin,s2[k]);
       // scanf("%s", s1[k]);
        //scanf("%s", s2[k]);
    }
    scanf("%d", &q);
    ch = getchar();
    for(i = 0; i < q; i++){
        getline(cin,s[i]);
        //scanf ("%s", &s[i]);
        for(j = 0; j < n; j++){
            if(s[i] == s1[j]){
                cout << s2[j] <<endl;
                break;
            }
        }
    }
    return 0;
}
