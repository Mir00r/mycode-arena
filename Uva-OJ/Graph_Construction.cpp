#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 10005

/*typedef pair <int, int> jora;
map <jora, jora> mp;

priority_queue <int> PQ;*/



LLI degree[MAX], n;



bool cmp(LLI a, LLI b){
    return a > b;
}


bool Havel_Hakimy(){
    LLI i, j, ans, tmp;
    for (i = 0; i < n-1; i++){
        sort (degree, degree+n, cmp);  // degree gulo k bar bar sort korenilam by decending order
        //printf ("%lld ", degree[i]);

        if (i + degree[i] >= n) return false; // jody kono noder degree total node thek a jody beshi ba shoman hoi

        for (j = i+1; j <= i+degree[i]; j++){ // 1st node ta pick kore porer noder value gulo decrement kortesi
            degree[j]--;
            if (degree[j] < 0) return false;
        }
    }
    if (degree[n-1] != 0) return false;

    return true;
}


int main(){
    int i;
    while(scanf ("%lld", &n) == 1){
        if(n == 0) break;
        for(i = 0; i < n; i++) scanf ("%lld", &degree[i]);

        if(Havel_Hakimy() == true) puts ("Possible");
        else puts ("Not possible");
    }
}
