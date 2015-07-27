/*stack is STL function. that means this is dynamic. you have no need to
manually implement stack. here is am showing you a example ....*/


#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

int main()
{
    stack<int> st; //stack declaration and stack will contain int type
    st.push(4); // push a integer
    cout<<"push 4 in stack\n";
    cout<<"Size of stack : "<<st.size()<<endl; // right now stack size is 1;
    st.push(6);
    cout<<"push 6 in stack\n";
    cout<<"Size of stack : "<<st.size()<<endl; // right now stack size is 2;
    cout<<"Top in the stack "<<st.top()<<endl;//how i can get top value from the stack

    cout<<"Iteration\n";
    // how to iterator full stack now we will see
    while(!st.empty()) // it will iterate untill stack is empty.
    {
        cout<<st.top()<<endl;
        st.pop();  // pop the top value from stack.
    }
    return 0;
}
