#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unindxned long long
#define MAX 110
#define row 10
#define col 10

int main(){
    int tc, cs=1, n, i, j, len_1, len_2, cnt, indx, tmp, ans;
    char str[MAX], ch[MAX];
    //char poem[row];
    scanf ("%d", &tc);
    getchar();
    while (tc--){
        string poem[row];
        gets (str);gets (ch);
        len_1 = strlen (str); len_2 = strlen (ch);
        indx = 0;
        for (i = 0; i < len_1; i++){
            if (str[i] != '<' && str[i] != '>'){
                printf ("%c", str[i]);
                poem[indx] += str[i];
                //printf ("Ok = %d\n", poem[i]);
            }
            else indx++;
            //printf ("Index = %d\n", indx);
        }
        puts ("");
        for (i = 0; i < len_2-3; i++) printf ("%c", ch[i]);
        //printf ("%c%c%c%c", poem[3], poem[2], poem[1], poem[4]);
        cout << poem[3] << poem[2] << poem[1] << poem[4] << endl;
        //puts ("");
    }
    return 0;
}

/*int main(){
    int tc, i, j, indx, len_1, len_2;
    char str[MAX], ch[MAX];
    //char poem[row];
    //string poem[row];
    scanf("%d", &tc);
    getchar();
    while(tc--){
       //char s[5];
        string poem[row];
        indx = 0;
        gets(str); gets(ch);
        len_1 = strlen(str); len_2 = strlen(ch);
        for(i = 0; i < len_1; i++){
            if(str[i] != '<' && str[i] != '>'){
                printf( "%c", str[i] );
                poem[indx] += str[i];
            }
            else indx++;
        }
        puts ("");
        for(i = 0; i < len_2 - 3; i++)
            printf( "%c", ch[i] );
        //printf ("%c%c%c%c\n", poem[3], poem[2], poem[1], poem[4]);
        cout << poem[3] << poem[2] << poem[1] << poem[4] << endl;
    }
    return 0;
}*/


/*
    string s1,s2,s3,s4,s5,s6;

int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
               getline(cin,s1,'<');
               getline(cin,s2,'>');
               getline(cin,s3,'<');
               getline(cin,s4,'>');
               getline(cin,s5);
               getline(cin,s6);
               cout<<s1<<s2<<s3<<s4<<s5<<endl;
               s6.erase(s6.end()-3,s6.end());  //去掉了最后末尾的三个...
               cout<<s6<<s4<<s3<<s2<<s5<<endl;
               }
    return 0;
    }
*/
