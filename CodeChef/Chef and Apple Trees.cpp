#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define MAX 1000005

int apple[MAX], n;
set <int> st;


/*int main(){
    int tc, cs = 1, i, j, cnt, tmp, ans, check;
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (i = 0; i < n; i++) scanf ("%d", &apple[i]);
        cnt = tmp = ans = check = 0;

        for (i = 0; i < n; i++){
//            if (apple[i] == apple[i+1]) check = 1;
//            else cnt++;
            //tmp = apple[i];
            st.insert (apple[i]);
        }
        printf ("%d\n", st.size ());

//        if (check){
//            //cnt++;
//            printf ("%lld\n", cnt);
//        }
//        else printf ("%lld\n", cnt);
        st.clear();
    }
    return 0;
}*/


int main(){
    int  i, j, k, tmp, ans, res, check;
    while (scanf ("%d", &n) == 1){
        for (i = 0; i < n; i++) scanf ("%d", &apple[i]);

        tmp = pow (2, n);
        for(i = 0; i < tmp; i++){
            for(j = 1; j < n; j++){
                for(k = 1; k <= j; k++)
                    printf("%d ", apple[j]);
                    printf("\n");
                }
            for(k = n - 1; j >= 1; j--){
                for(k = 1; k <= j; k++)
                    printf("%d ", apple[j]);
                    printf("\n");
            }
            if(i!=(tmp-1))printf("\n");
        }

    }
    return 0;
}
