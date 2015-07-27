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
#define MAX 500005
#define pb push_back
#define NL puts ("")

int min(int, int, int);

int arr[MAX], n;
set <int> st;

int main(){
    int tc, i, j, cnt, tmp, ans, len, maxn, num;
    scanf("%d", &tc);
    while (tc--){
        scanf("%d", &n);
        for (i = 0; i < n; i++){
            scanf ("%d", &num);
            arr[num]++;
           // printf ("%d\n", arr[i]);
        }

        cnt = tmp = maxn = 0;

        for (i = 0; i < MAX; i++){
            if (arr[i] > maxn)
                maxn = arr[i];
        }
       // printf ("%d\n", maxn);
        ans = n - maxn;
        printf ("%d\n", ans);


        //sort (arr, arr+n);
//        tmp = arr[n-1];
//        for (i = 1; i <= n; i++){
//            //if (arr[i] != arr[i+1]) cnt++;
//            st.insert (arr[i]);
//        }
//        len = st.size();
//        if (len == n) ans = len-1;
//        else{
//            if (n % len == 0)
//                ans = n - len + 1;
//            else
//                ans = n - len - 1;
//        }
//        printf ("%d\n", ans);
//        st.clear();
    }
    return 0;
}
