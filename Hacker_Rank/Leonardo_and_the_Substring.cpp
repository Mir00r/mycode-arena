#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 10000 + 5
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1500



int main(){
    int test, i;
    scanf ("%d", &test);
    while(test--){
        string S;
        cin>>S;
        
        LL cnt = 1, ans = 0;
        for( i = 1; i < S.size(); i++){
            if(S[ i ] != S[ i - 1 ])
                cnt++;
            else{
                ans += (cnt*(cnt+1))/2;
                cnt = 1;
            }
        }
        ans += (cnt*(cnt+1))/2;
        printf ("%lld\n", ans);
    }
    return 0;
}
