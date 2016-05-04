#include <bits/stdc++.h>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 105
#define col 105
#define MAX 100000 + 5
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255



char key[row][col] = {"int", "for", "if", "else", "else if",
                    "while", "switch", "return", "float",
                    "double","break", "long", "continue", "sizeof", "char"};
char ch[MAX], str[MAX];

void cut_str(int ln){
    int j = 0;
    for (int i = 0; i < ln && ch[i] != ' '; i++){
        str[j] = ch[i];
        j++;
    }
    str[j] ='\0';
}

int main (){
    string store;
    int tc, cs=1, i, j , n, len, tmp, cnt, ans, check;
    scanf ("%d", &tc);
    while (tc--){
        //scanf ("%s%s", ch, str);
        gets (ch); //gets (str);
        len = strlen (ch);
        check = cnt = tmp = 0;
        cut_str(len);
        for (i = 0; i < 50; i++){
            if (strcmp (str, &key[i][0]) == 0){
                //store[i] = ch;
                check = 1;
            }
        }
        if (check == 1){
            printf ("%s", str);
            //puts ("Is a KeyWord");
            NL;
        }
        else puts ("Not Keyword");
    }
    return 0;
}



// 2nd Way

char key[row][col] = {"int", "array", "for", "if", "else", "else if",
                        "float", "double", "while", "do", "char", "break",
                        "scanf", "printf", "vector", "map","struct"
                    };

int main (){
    int tc, cs=1, n, i, j, len, cnt, ans, check, tmp;
    char ch[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s", ch);
        len = strlen (ch);
        check = cnt = ans = 0;
        for (i = 0; i < sizeof (key); i++){
            if (strcmp (ch, &key[0][i]) == 0){
                check = 1;
                break;
            }
        }
        if (check == 1) puts ("Keyword");
        else puts ("Not Keyword");
    }
    return 0;
}
