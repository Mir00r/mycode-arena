#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005
#define inf 1000000009

int main(){
    #ifdef Mir00r
        freopen ("input.txt", "r", stdin);
        //freopen ("output.txt", "w", stdout);
    #endif


    string word[MAX], say;
    int n, tc, i, len, ans;
    bool check;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0;i < n; i++) cin >> word[i];
        cin >> say;
        check = false;
        for (i = 0; i < n; i++){
            if (word[i].find (say) == 0){
                check = true;
                break;
            }
        }

        if (check) puts ("yes");
        else puts ("no");
    }

    return 0;
}

