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

string str, visit;
int cnt[MAX];




int main(){
    int tc, i, j, len, ind, maxn;
    scanf ("%d", &tc);
    while (tc--){
        cin >> str;
        len = str.length();
        maxn = ind = 0;
        for (i = 0; i < len; i++){
            if (str[i] >= 'a' && str[i] <= 'z')
                cnt[str[i] - 'a']++;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                cnt[str[i] - 'A']++;
        }

        for (i = 0; i < 26; i++){
            if (cnt[i] >= maxn){
                maxn = cnt[i];
                ind = i;
            }
        }
        printf ("%c\n", ind + 'a');
    }
    return 0;
}




/*void cal (string str, int len){
    int i, j, ind, check, tmp, maxn, ans;
    ind = check = 0;
    memset (cnt, 0, sizeof (cnt));
    //int len = str.length();
    for (i = 0; i < len; i++){
        if (i == 0){
            visit[ind++] = str[i];
            cnt[ind - 1]++;
        }
        else{
            for (j = 0; j < ind; j++){
                if (str[i] == visit[j]){
                    cnt[j]++;
                    check = 1;
                }
            }
            if (check == 0){
                visit[ind++] = str[i];
                cnt[ind - 1]++;
            }
            check = 0;
        }
    }
    for (i = 0; i < ind; i++){
        if ((i == 0) && (visit[i] != ' ')){
            maxn = cnt[i];
            continue;
        }
        if ((maxn < cnt[i]) && (visit[i] != ' ')){
            maxn = cnt[i];
            ans = i;
        }
    }
    cout << visit[ans] << endl;
    //printf ("%c\n", visit[ans]);
}

int main(){
    int tc, i, j, len;
    scanf ("%d", &tc);
    while (tc--){
        cin >> str;
        len = str.length();
        cal (str, len);

    }
    return 0;
}
*/



/*
int *getCharCountArray(char *);
char getIndexOfMax(int *, int);

// Returns the maximum occurring character in
 //the input string
char getMaxOccuringChar(char *str)
{
  int *count = getCharCountArray(str);
  return getIndexOfMax(count, NO_OF_CHARS);
}

// Returns an array of size 256 containg count
  // of characters in the passed char array
int *getCharCountArray(char *str)
{
  int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
  int i;

  for (i = 0; *(str+i);  i++)
    count[*(str+i)]++;

  return count;
}

char getIndexOfMax(int ar[], int ar_size)
{
  int i;
  int max_index = 0;

  for(i = 1; i < ar_size; i++)
    if(ar[i] > ar[max_index])
      max_index = i;

  // free memory allocated to count
  free(ar);
  ar = NULL;

  return max_index;
}

int main()
{
  char str[] = "sample string";
  printf("%c", getMaxOccuringChar(str));

  getchar();
  return 0;
}

*/
