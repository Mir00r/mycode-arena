#include <bits/stdc++.h>


#define pf printf
#define sf scanf
#define Max 1000000
#define LL long long

using namespace std;

typedef long long int lld;

vector <lld> v, one, two;

lld n, s;

int main()
{
    lld i, j, k, test, kase = 0;
    while(scanf ("%lld %lld", &n, &s)!=EOF){
        deque <lld> dq;
        lld mot = 0;
        for( i=0 ; i<n ; i++ ){
            scanf ("%lld",  &k);
            v.push_back(k);
            mot+=k;
        }

        if(mot<s) puts("0");
        else{

            lld tot, sum;
            tot = sum = 0;
            for( i=0 ; i<n ; i++ ){

                    dq.push_front(v[i]);
                    tot++;
                    sum+=v[i];

                    if(sum==s) one.push_back(tot);
                    if(sum>s) two.push_back(tot);

                    if(sum>=s){
                        if(sum==s) one.push_back(tot);
                        if(sum>s) two.push_back(tot);
                        while(sum>=s){
                            k = dq.back();
                            dq.pop_back();
                            sum = sum - k;
                            tot--;
                            if(sum==s) one.push_back(tot);
                            if(sum>s) two.push_back(tot);
                        }
                    }
            }
            sort(one.begin(), one.end());
            sort(two.begin(), two.end());
            lld ans;
            if(one.size()!=0 && two.size()!=0) ans = min(one[0], two[0]);
            else if(one.size()==0) ans = two[0];
            else ans = one[0];

            printf ("%lld\n", ans);

        }
        one.clear();
        two.clear();
        v.clear();

        while(!dq.empty()) dq.pop_back();
    }

    return 0;
}

