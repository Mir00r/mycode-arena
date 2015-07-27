#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 10000
#define row 50
#define col 50
#define memo(x, y) memset (x, y, sizeof (x));

char str[MAX], ch[MAX];
//string str, ch;
LLI sub_indx[MAX], n, cnt;


void power_set(char *str, int str_size, int pos, int start_Pos, int len){
   cnt = 0;
   if (len == 0)
      printf("%.*s\n", pos, str);
   else
      for (int i = start_Pos; i < str_size; i++){
         swap(str[pos], str[i]);
         power_set(str, str_size, pos+1, i+1, len - 1);
         swap(str[pos], str[i]);
         ch[cnt++] = str[i];
      }
}


int main(){
    LLI ans, len, i;
    while (scanf ("%lld", &n) == 1){
        scanf ("%s", str);
        for (i = 1; i <= n; i++)
            power_set(str, n, 0, 0, i);
        for (i = 0; i < cnt; i++)
            //if (ch[i] == "LOL") cnt++;
        printf ("%s \n", ch);
    }
    return 0;
}




/*void power_set(char *str, LLI str_size){
    LLI pow_str_size, i, j;

    pow_str_size = pow (2, str_size);

    for (i = 0; i < pow_str_size; i++){
        for (j = 0; j < str_size; j++){
            if (i & (1 << j))
                printf ("%c", str[j]);
        }
        puts ("");
    }
}

int main(){
    LLI ans, len;
    while (scanf ("%lld", &n) == 1){
        scanf ("%s", str);
        power_set(str, n);
        getchar();
    }
    return 0;
}*/


/*



void printPowerSet(char *set, int set_size){
    //set_size of power set of a set with set_size
      //n is (2**n -1)
    LLI pow_set_size = pow(2, set_size);
    int i, j;

    // Run from i 000..0 to 111..1
    for(i = 0; i < pow_set_size; i++){
        for(j = 0; j < set_size; j++){
          // Check if jth bit in the i is set
            // If set then pront jth element from set
          if(i & (1<<j))
            printf("%c", set[j]);
        }
        printf("\n");
    }
}

// Driver program to test printPowerSet
int main(){
    char set[MAX];
    while (scanf ("%lld", &n) == 1){
        scanf ("%s", set);
        printPowerSet(set, n);
        getchar();
    }
    return 0;
}
*/





/*void store_sub_seq(LLI indx){
    for (LLI j = 0; j < indx; j++)
        sub_indx[j] = j;
}


void find_next_sub_seq(LLI max_len, LLI len){
    LLI pos = len - 1, i;
    //find first digit that can be increased
    while (pos >= 0){
        if (sub_indx[pos] == max_len - (len - 1 - pos)) pos--;
        else break;
    }
    sub_indx[pos]++; // increase digit

    // Update other digit
    for (i = pos+1; i < len; i++)
        sub_indx[i] = sub_indx[i-1] + 1;
}


int main(){
    LLI max_len, i, j, k, l;
    while (scanf ("%s", str) != EOF){
        //scanf ("%s", str);
        max_len = str_size (str)-1;
        //max_len = str.len()-1;
        for (i = 1; i <= max_len+1; i++){
            printf ("%lld\n", i);

            store_sub_seq(i);

            for (k = 0; ; k++){
                for (l = 0; l < max_len+1; l++)
                    printf ("%c", str[sub_indx[l]]);
                    //cout << str[sub_indx[l]];
                    puts ("");

                    if (sub_indx[0] == max_len - (i-1)) break;
                    else
                        find_next_sub_seq (max_len, i); //
            }
            puts ("");
        }
    }
    return 0;
}*/

/*string word;

void find_sub_seq(string suffix, string prefix){
    int i, len;
    len = prefix.len();
    if (len > 0) return;
    cout << suffix << endl;
    for (i = 0; i < len; i++){
        find_sub_seq(suffix+prefix[i], prefix.substr (i+1, len));
    }
}

int main(){
    while (cin >> word){
        find_sub_seq(0, word);
    }
    return 0;
}*/

/*void printSet(int stray[],int size){
    int i;
    for (i=1;i<=size;i++)
        std::cout << stray[i] << " ";
    std::cout << std::endl;

    return;
}

void printPowerset (int n){
    int stack[10],k;

    stack[0]=0; // 0 is not considered as part of the set
    k = 0;
    while(1){
        if (stack[k]<n){
            stack[k+1] = stack[k] + 1;
            k++;
        }
        else{
            stack[k-1]++;
            k--;
        }
        if (k == 0) break;
        printSet(stack,k);
    }
    return;
}

int main(){
    printPowerset(4);
    return 0;
}
*/

/*
// Recursion implementation

void powersetRec(int s[], int k; int m, int n) {
    if (m <= n) {
        s[k+1] = m ;
        printSet(s, k+1) ;
        powersetRec(s, k+1, m+1, n) ; // with m
        powersetRec(s, k, m+1, n) ;   //without m
    }
}
*/
