#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long  long
#define MAX 1005

string pref, word[MAX];

map <string, int> mp;

int main (){
    int n, i, j, len, ind, tmp, check;
    cin >> pref;
    scanf ("%d", &n);
    //ind = 0;
   // while (n--){
        for (i = 1; i <= n; i++)
            cin >> word[i];
        //mp[word]++;
        sort (word+1, word+1+n);
        for (i = 1; i <= n; i++){
            if (word[i].find(pref) == 0){
                pref = word[i];
                break;
            }
        }
        cout << pref << endl;
   // }
//    sort (word+1, word+1+n);
//    for (i = 1; i <= n; i++){
//        if (word[i].find(pref) == 0)
//            pref = word[i];
//    }
    //cout << pref << endl;
    return 0;
}
