#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

int main(){
    int t, i;
    stack <char> st;
    char str[130];
    scanf ("%d", &t);
    getchar();
    while (t--){
        gets(str);
        bool cheeck = true;
        for (i = 0; i < strlen(str); i++){
            if (str[i] == '(' || str[i] == '[')
                st.push(str[i]);
            else{
                if (str[i] == ')'){
                    if (! st.empty()){
                        if (st.top() == '('){
                            st.pop();
                            continue;
                        }
                        else{
                            cheeck = false;
                            break;
                        }

                    }
                    else{
                        cheeck = false;
                        break;
                    }
                }
                else if (str[i] == ']'){
                    if (! st.empty()){
                        if (st.top() == '['){
                            st.pop();
                            continue;
                        }
                        else{
                            cheeck = false;
                            break;
                        }
                    }
                    else{
                        cheeck = false;
                        break;
                    }
                }
            }
        }
        if (st.empty() == false)
            cheeck = false;
        if (cheeck)
            printf ("Yes\n");
        else
            printf("No\n");
        while (! st.empty())
            st.pop();
    }
    return 0;
}




/*#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

int main()
{
    int t, i, j;
    char str[130];
    stack <char> st;
    scanf ("%d", &t);
    getchar();
    while (t--)
    {
        gets(str);
        int cheeck = 0;
        if (strlen(str) == 1 || strlen(str) % 2 != 0)
        {
            printf ("No\n");
            continue;
        }
        else
        {
            printf ("Yes\n");
            continue;
        }
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == '(' || str[i] == '[')
                st.push(str[i]);
            else if (str[i] == ')' && ! st.empty() && st.top() == '(')
                st.pop();
            else if (str[i] == ']' && ! st.empty() && st.top() == ']')
                st.pop();
            else
                cheeck = 1;
        }
        if(st.empty() && cheeck == 0)
            printf ("Yes\n");
        else
            printf ("No\n");
        while (! st.empty())
            st.pop();
    }
    return 0;
}*/
