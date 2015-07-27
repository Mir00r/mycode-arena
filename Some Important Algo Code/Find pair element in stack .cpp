/*when you need a pair element in stack you can use it in this way. in
both example i have shown in stack type in integer but you can use it
as string,double and so on as you need.*/


#include<iostream>
#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
typedef pair<int,int> ii;

int main()
{

    stack<ii> st;
    st.push(make_pair(3,5));
    st.push(make_pair(1,10));
    while(!st.empty())
    {
        pair<int,int> i = st.top();
        st.pop();
        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
}
