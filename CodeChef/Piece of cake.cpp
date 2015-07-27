#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

#define LLI long long int
#define ULL unsigned long long
#define MAX 100005

int main(){
    int n, i, j, len, arr[MAX];
    string str, ch;
    set <string> st;
    bool check;
    scanf ("%d", &n);
    while (n--){
        //scanf ("%s", str);
        cin >> str;
        //sort (str.begin(), str.end());
//        if (isalpha (str))
//            st.insert(str);
        //cout << str << endl;
        check = false;
        //ch = str[0];
       int cnt = 0;
       int sum = 0;
        for (i = 0; i < 26; i++)
            arr[i] = 0;

        len = str.length();
        for (i = 0; i < len; i++)
            arr[str[i] - 'a']++;

        for(i = 0; i < 26; i++){
            sum = 0;
            for (j = 0; j < 26; j++){
                if (j != i)
                    sum += arr[j];
            }
            if (sum == arr[i]){
                check = true;
                //puts ("YES");
                break;
            }

        }
        //printf ("Sum = %d\n", sum);
        if (check) puts ("YES");
        else puts ("NO");

//       for (i = 0; i < str.length (); i++){
//            //if (isalpha (str[i]))
//                //st.insert(str[i]);
//            if (str[i] >= 'a' && str[i] <= 'z')
//                if (ch[str[i] - 'a'] == '0'){
//                    ch[str[i] - 'a'] = 1;
//                    cnt++;
//                }
//       }
//       printf ("%d\n",cnt);


//        len = strlen (str);
//        for (i = 1; i < len; i++){
//            if (ch == str[i]){
//                check = true;
//                break;
//            }
//        }
//        if (check) puts ("YES");
//        else puts ("NO");
    }
    return 0;
}
