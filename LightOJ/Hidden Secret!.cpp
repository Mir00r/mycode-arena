#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 999


int main()
{
    int ara[26]={0};
    int ara2[26]={0};
    char a[101],b[101];
    int t,i=0,ct=1;
    scanf("%d\n",&t);
    while(t--)
    {
        gets(a);
        gets(b);
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
        if(a[i] == 32)
        {
            continue;
        }
        ara[a[i]-'a']++;

    }
    int len2 = strlen(b);
    for(i=0;i<len2;i++)
    {
        if(b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] = b[i] + 32;
        }
        if(b[i] == 32)
        {
            continue;
        }
        ara2[b[i]-'a']++;

    }

    int cs=0;
    for(i = 0; i < 26; i++)
    {
        if(ara[i] == ara2[i])
        {
            cs++;
            if(cs == 26){
                printf("Case %d: Yes\n",ct++);
            }
            continue;
        }
        else{
                printf("Case %d: No\n",ct++);
                break;
        }


     }
}

 return 0;
}





/*
int main(){
    int tc, cs=1, i, j, k, cnt1, cnt2, len1, len2;
    char str1[MAX], str2[MAX], ch1[MAX], ch2[MAX];
    scanf ("%d", &tc);
    getchar();
    while (tc--){

        memset (ch1, 0, sizeof (ch1));
        memset (ch2, 0, sizeof (ch2));
        cnt1 = cnt2 = 0;

        gets(str1);
        gets(str2);

        len1 = strlen(str1);
        len2 = strlen(str2);

        for (i = 0; i < len1; i++){
            if (str1[i] >= 'A' && str1[i] <= 'Z'){
                ch1[cnt1] = str1[i] + 32;
                cnt1++;
            }
            else if (str1[i] >= 'a' && str1[i] <= 'z'){
                ch1[cnt1] = str1[i];
                cnt1++;
            }
        }

        ch1[cnt1] = '\0';
        //gets (str2);
        //len2 = strlen(str2);

        for (i = 0; i < len2; i++){
            if (str2[i] >= 'A' && str2[i] <= 'Z'){
                ch2[cnt2] = str2[i] +32;
                cnt2++;
            }
            else if (str2[i] >= 'a' && str2[i] <= 'z'){
                ch2[cnt2] = str2[i];
                cnt2++;
            }
        }

        ch2[cnt2] = '\0';

        sort (ch1, ch1 + cnt1);
        sort (ch2, ch2 + cnt2);

        if (strcmp (ch1, ch2) == 0)
            printf ("Case %d: Yes\n", cs++);
        else
            printf ("Case %d: No\n", cs++);
    }
    return 0;
}
*/
