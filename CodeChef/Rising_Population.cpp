#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <queue>
#include <stack>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI long long int
#define ULL unsigned long long int
#define MAX 50005
#define alpa 26
#define pb push_back
#define NL puts ("")



bool check_anagram(char a[], char b[]){
   int fst[alpa], sec[alpa], cnt = 0, i;

    memset (fst, 0,sizeof (fst));
    memset (sec, 0, sizeof (sec));


   while (a[cnt] != '\0'){
      fst[a[cnt]-'a']++;
      cnt++;
   }

   cnt = 0;

   while (b[cnt] != '\0'){
      sec[b[cnt]-'a']++;
      cnt++;
   }

   for (i = 0; i < alpa; i++){
      if (fst[i] != sec[i])
         return false;
   }

   return true;
}


int main(){
    int tc, len, i, j;
    char nam1[MAX], nam2[MAX];

    scanf ("%d", &tc);
    while (tc--){
        scanf ("%s %s", nam1, nam2);


//        len = strlen (nam2);
//        if (nam1[0] == nam2[len-1])
//            puts ("YES");
//        else
//            puts ("NO");

        if (check_anagram(nam1, nam2) == true) puts ("YES");
        else puts ("NO");

    }
    return 0;
}
