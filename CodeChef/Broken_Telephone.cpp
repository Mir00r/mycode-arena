#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define row 205
#define col 205
#define MAX 100005
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 1000000007


LLI n, player[MAX], res[MAX];
set <LLI> st;


int main(){
    int tc, cs=1, i, j, cnt, a, b, tmp;
    LLI sum, ans, len;
    scanf ("%lld", &tc);
    bool check;


    while (tc--){
        memo (res, 0);
        scanf ("%lld", &n);

        for (i = 0; i < n; i++)
            scanf ("%lld", &player[i]);

        cnt = a = b = tmp = ans = 0;

        check = false;

        for (i = 0; i < n; i++){


            if (i != n - 1){
                tmp = i+1;
                if (player[i] != player[tmp]){
                      res[i]++;
                      res[tmp]++;

                }
//                else
//                    continue;
//                if (res[tmp] == 2)
//                    res[tmp]--;
            }


        }

//        for (i = 0; i < n; i++)
//            printf ("%lld ", res[i]);
//            NL;


        for (i = 0; i < n; i++){
            //printf ("%lld ", res[i]);
            //NL;
//            if (res[i] == 2)
//                res[i]--;
            if (res[i] >= 1)
              //  ans += res[i];
            ans++;
        }

        printf ("%lld\n", ans);
    }
    return 0;
}

/*



//                    puts ("bob");
//                    cnt += 2;
//                    //check = true;
//                    a = tmp;
//                    printf ("A = %d\n", a);




//                if (a - i-1 == 1){
//                   puts ("ok");
//                    cnt--;
//                }

                    //printf ("I = %d    Tmp = %d\n", i, tmp);
//                    if (a - tmp == -1){
//                      //  puts ("oka");
//                        cnt++;
//                        a = tmp;
//                    }
//                    else{
//                        //puts ("boka");
//                        cnt += 2;
//                        a = tmp;
//                    }





       //     st.insert (player[i]);


//        len = st.size ();
//
//        if (len == 1)
//            puts ("0");
//        else
//            printf ("%lld\n", len+1);
//
//        st.clear ();


*/
