#include <bits/stdc++.h>

using namespace std;

typedef long long int lld;


int n, block;
vector <int> v;
deque < pair<int,int> > dq;


void sliding_window(){
    int i, j, k, a, b;
    for( i=1 ; i<=n ; i++ ){
        if(dq.empty()){ dq.push_front(make_pair(v[i],i)); }
        else{
            if(i>block) printf ("%d  ", dq.front().first);
            k = i - block;
            if(k>0){
//                a = dq.front().first;
                b = dq.front().second;
                while(b<=k){
                    dq.pop_front();
                    b = dq.front().second;
                }
            }

            a = dq.back().first;
            if(v[i]<a){
                while(v[i]<a){
                    dq.pop_back();
                    a = dq.back().first;
                }
            }
            dq.push_back(make_pair(v[i],i));
        }
    }
    printf ("%d\n", dq.front().first);
}


int main(){
    int i, j, k, test,  kase = 0;
    cin >> n >> block;
    v.push_back(-1);
    for( i=0 ; i <n ; i++ ){
        cin >> k;
        v.push_back(k);
    }

    sliding_window();

    return 0;
}
