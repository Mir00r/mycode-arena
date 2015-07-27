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
#define MAX 1100
#define pb push_back
#define NL puts ("")

void prime_gen();
LLI prime[MAX];
bool isprime[MAX];
vector <int> vt;

void prime_gen(){
    LLI root, i, j, cnt;
    for (i = 2; i < MAX; i++)
        isprime[i] = true;
    root = sqrt(MAX);
    for (i = 3; i <= root; i++)
        for (j = i*i; j < MAX; j += i)
            if (isprime[j] == true)
                isprime[j] = false;
    cnt = 0;
    prime[cnt++] = 1;
    prime[cnt++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (isprime[i] == true)
            prime[cnt++] = i;
}


int main(){
    prime_gen();
    int n, c, st, mid, end, i, j, len, ans, tmp, prm;

    while (scanf ("%d %d", &n, &c)== 2){
        tmp = end = 0;
        for (i = 0; prime[i] <= n; i++){
            //if (prime[i] == 0)
               // prime[tmp++] = i;
                vt.pb(prime[i]);
               // printf ("%d ", vt[i]);
        }
        //NL;
        len = vt.size();
        //printf ("Len = %d\n", len);
        printf ("%d %d: ", n, c);

        if (len % 2){
            st = (2*c) - 1;
            //printf ("Odd Start = %d\n", st);
            if (len < st){
                for (i = 0; i < len; i++)
                    printf ("%d ", vt[i]);
            }
            else{
                tmp = (len - st) / 2;
                //printf ("Odd Tmp = %d\n", tmp);
                for (i = tmp; i < tmp+st; i++)
                    printf ("%d ", vt[i]);
            }
        }
        else{
            st = 2*c;
            //printf ("Even st = %d\n", st);
            if (len < st){
                for (i = 0; i < len; i++)
                    printf ("%d ", vt[i]);
            }
            else{
                tmp = (len - st) / 2;
              //  printf ("Even tmp = %d\n", tmp);
                for (i = tmp; i < tmp+st; i++)
                    printf ("%d ", vt[i]);
            }
        }
        NL;
        NL;
        vt.clear();
    }

    return 0;
}

/*void prime_gen(){
    int i, j, cnt = 0;
    for (i = 4; i <= MAX; i += 2)
        prime[i] = 1;

    for (i = 3; i <= MAX; i += 2){
        if (prime[i] == 0)
            for (j = i*i; j <= MAX; j += i)
                prime[j] = 1;
    }
}


        if (len % 2 == 0) end = c*2;
        else end = (c*2)-1;

        st = len - end;
        st /= 2;

        if (end > len){
            st = 0;
            end = len;
        }

        printf ("%d %d: ", n, c);
        for (i = st; i < end+st; i++)
            printf ("%d ", vt[i]);
            puts ("");

*/


/* if ( (prime[n] % 2 != 0 && c*2-1 >= prime[n] || (prime[n] % 2 == 0 && c*2 >= prime[n])) ){
            start = 0;
            end = prime[n] - 1;
            //printf
        }
        else if (prime[n] % 2 != 0){
            start = mid - (c-1);
            end = mid + (c-1);
        }
        else if (prime[n] % 2 == 0){
            start = mid - c;
            end = mid + c-1;
        }
        printf ("%d %d: ", n, c);
        for (i = start; i <= end; i++)
            printf ("%d ", prime[i]);
            puts ("");*/



/*int main(){
    prime_gen();
    int N, C, start, mid, end, i, j, k, prime_length;

    while(scanf("%d%d", &N, &C) != EOF){
        prime_length = 0;

        while (isprime[prime_length++] <= N && prime_length <= cnt);
            prime_length--;
            printf ("Prime_length = %d\n", prime_length);

        if (prime_length % 2 != 0){ // For Odd prime length

            start = prime_length / 2 - (2*C-1) / 2;
                //printf ("Start = %d\n", start);
            if (start < 0)
                start = 0;
            end = prime_length / 2 + (2*C-1) / 2;
                //printf ("End = %d\n", end);
            if (end >= prime_length)
                end = prime_length - 1;
        }
        else{ // For Even prime length

            start = prime_length / 2 - C;
                //printf ("Start-2 = %d\n", start);
            if (start < 0)
                start = 0;
            end = prime_length / 2 + C - 1;
                //printf ("End-2= %d\n", end);
            if (end >= prime_length)
                end = prime_length - 1;
        }
        printf ("%d %d:", N, C);
        for (k = start; k <= end; k++)
            printf (" %d", isprime[k]);
            printf ("\n\n");
    }
    return 0;
}*/






/*int prime[MAX + 1], is_prime[MAX + 1], count = 0;

void list_prime(){
    is_prime[count++] = 1;
    for (int i = 2; i <= MAX; i++)
        if(!prime[i]){
            is_prime[count++] = i;
            for (int j = i; i * j <= MAX; j++) list_prime
                prime[i * j] = 1;
        }
}*/


/*#include <stdio.h>
using namespace std;

int main()
{
    bool prime[1005] = {1,0};
    int is_prime[1005] = {0,1};
    int prime_length = 1, N, C, a, b, i, j, k;
    for(i = 2 ; i <= 1000 ; i++ )
    {
        if(!prime[i] ){
            for(j = i+i ; j <= 1000 ; j+=i)
                prime[j] = 1;
          prime_length++;
          //printf ("prime_length = %d\n", prime_length);
        }
        is_prime[i] = prime_length;
        //printf ("Is_Prime = %d\n", is_prime[i]);
    }
    while(scanf("%d%d", &N, &C) != EOF)
    {
        printf ("Is_prime = %d\n", is_prime[N]);
        a = is_prime[N]/2 - C + 2;
        printf ("A = %d\n", a);
        b = is_prime[N]/2 + C;
        printf ("B = %d\n", b);
        if( !(is_prime[N] % 2))
            a--;
        else if(a < 1)
            a = 1;
        else if(b > is_prime[N])
            b = is_prime[N];

        printf("%d %d:", N, C);
        for(k = 1 ; is_prime[k] < b ; k++)
        {
          if(!prime[k])
            if(is_prime[k] < b && is_prime[k] >= a)
              printf(" %d", k);
        }
        printf (" %d\n\n", k);
    }
    return 0;
}*/
