#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define ULL unsigned long long
#define MAX 60
#define row 10
#define col 10
#define eps 1e-9
#define pb push_back
#define NL puts ("")

//stack <int> st;
//queue <int> q;
//priority_queue <int> pq;

//bool isst, isq, ispq;

int n, i, x, y;

/*void check_emty (){
    isst = isq = ispq = true;
    if (st.empty ())
        isst = false;
    if (q.empty ())
        isq = false;
    if (pq.empty ())
        ispq = false;
}

void st_check (){
    isst = true;
    if (!st.empty()){
        if (st.top() == y)
            st.pop();
        else if (st.top() != y)
            isst = false;
    }
}

void q_check (){
    isq = true;
    if (!q.empty()){
        if (q.front() == y)
            q.pop();
        else if (q.front() != y)
            isq = false;
    }
}


void pq_check (){
    ispq = true;
    if (!pq.empty()){
        if (pq.top() == y)
            pq.pop();
        else if (pq.top() != y)
            ispq = false;
    }
}*/




int main(){
    bool isst, isq, ispq;
    while (scanf("%d", &n) == 1){

        isst = isq = ispq = true;

        stack <int> st;
        queue <int> q;
        priority_queue <int> pq;

        for (i = 0; i < n; i++){
            scanf ("%d %d", &x, &y);
            if (x == 1){
                st.push(y);
                q.push(y);
                pq.push(y);
            }
            else if (x == 2){
                //check_emty();

                //st_check();
                //q_check();
                //pq_check();

                if (st.empty ())
                    isst = false;
                if (q.empty ())
                    isq = false;
                if (pq.empty ())
                    ispq = false;

                if (!st.empty()){
                    if (st.top() == y)
                        st.pop();
                    else if (st.top() != y)
                        isst = false;
                }

                if (!q.empty()){
                    if (q.front() == y)
                        q.pop();
                    else if (q.front() != y)
                        isq = false;
                }

                if (!pq.empty()){
                    if (pq.top() == y)
                        pq.pop();
                    else if (pq.top() != y)
                        ispq = false;
                }
            }
        }

        if (isst + isq + ispq > 1)
            puts ("not sure");
        else if (isq)
            puts ("queue");
        else if (isst)
            puts ("stack");
        else if (ispq)
            puts ("priority queue");
        else
            puts ("impossible");
    }
    return 0;
}




/*if (stack){
    if (! st.empty() && st.top() == y)
        st.pop();
    else
        stack = false;
}
else if (queue){
    if (! q.empty() && q.front() == y)
        q.pop();
    else
        queue = false;
}
else if (p_queue){
    if (! p_q.empty() && p_q.top() == y)
        p_q.pop();
    else
        p_queue = false;




    stack &= !st.empty() && st.top() == y;  // check false
                queue &= !q.empty() && q.front() == y;
                p_queue &= !p_q.empty() && p_q.top() == y;

                if (!p_q.empty())
                    p_q.pop();
                if (!q.empty())
                    q.pop();
                if (!st.empty())
                    st.pop();

}*/
