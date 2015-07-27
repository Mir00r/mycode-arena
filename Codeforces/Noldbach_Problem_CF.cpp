#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define l long int
#define ll long long int
#define MAX 500
#define M 1000

void prime_gen();
int prime[MAX], cnt, i, j;
bool is_prime[MAX];
int prm_arr[MAX] = {
    2, 3, 5, 7 ,11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103,
    107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211,
    223, 227, 229, 233, 239, 241, 251, 257, 263 ,269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331,
    337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449,
    457, 461, 463, 467, 479, 487, 491, 499};

/*void prime_gen(){
    int root;
    for (i = 2; i < MAX; i++) is_prime[i] = true;
    root = sqrt (MAX);
    for (i = 3; i <= root; i++)
        for (j = i*i; j < MAX; j += i)
            if (is_prime[i] == true) is_prime[j] = false;
    cnt = 0;
    prime[cnt++] = 2;
    for (i = 3; i < MAX; i += 2)
        if (is_prime[i] == true) prime[cnt++] = i;
}


int main(){
    int n, k, a, b, z, ans, koita, tmp, prm_cnt;
    prime_gen();
//    scanf ("%d", &n);
//    for (i = 0; i < n; i++)
//        printf ("%d ", prime[i]);
//    scanf ("%d%d", &n, &k);
//    prm_cnt  = 0; koita = 0;
//    while (prime[koita] <= n && koita < 44){
//        prm_cnt++; koita++;
//    }
    //printf ("prm_cnt = %d\n", prm_cnt);
  //  if (prm_cnt >= k) puts ("YES");
   // else puts ("NO");

    while (scanf ("%d%d", &n, &k) == 2){
        prm_cnt = 0;
        koita = 0;
        for (; n;){
            if (prime[n--]) k--;
        }
        if (k > 0) puts ("NO");
        else puts ("YES");
    }
    return 0;
}*/

int main(){
    int prime_ghosty[44]={
        13,19,31,37,43,53,61,79,101,113,139,163,173,199,211,223,241,269,277,331,353,373,397,
        457,463,509,521,541,577,601,619,631,727,773,787,811,829,853,883,907,919,947,967,991};
    int n, k, m = 0, z = 0;
    scanf ("%d%d", &n, &k);
    while(prime_ghosty[m] <= n && m < 44){
        z++; m++;
    }
    if(z >= k) puts ("YES");
    else puts ("NO");
    return 0;
}

/*int main(){
    int n, k, i, j, s, a[200], b, m;
    scanf ("%d%d", &n, &k);
    for(i = 2; i <= n; i++){
        s = 1;
        for(j = 0; j < m; j++)
            if(!(i % a[j])) s = 0;
        if(s)
            a[m++] = i;
    }
    for(i = 0, j = 0; ;){
        b = a[i] + a[i++] + 1;
        if(b > n) break;
            while(b > a[j]){
                j++;
                if(a[j] == b) k--;
            }
    }
    if (k > 0) puts ("NO");
    else puts ("YES");
    return 0;
}*/


/*int a[M+1], x[M+1], b[200];
int main(){
    int i, j;
    for(i = 3; i <= M; i += 2)
        if(!a[i])
            for(j = i*2; j <= M; j += i) a[j] = 1;
    for(j = 1,i = 3; i <= M; i +=2)
        if(!a[i]) b[j++] = i;
    for(i = 1; ; i++)
        if((j = b[i] + b[i+1] + 1) > M) break;
        else if (!a[j]) x[j] = 1;
    scanf("%d%d",&i,&j);
    for(; i ;) if(x[i--]) j--;
    puts(j > 0 ? "NO" : "YES");
    return 0;
}*/

/*o solve this problem you were to find prime numbers in range [2..N].
The constraints were pretty small, so you could do that in any way - using the Sieve of Eratosthenes or simply looping
over all possible divisors of a number.
Take every pair of neighboring prime numbers and check if their sum increased by 1 is a prime number too.
Count the number of these pairs, compare it to K and output the result.*/

/*int main() {
    double L, C, R1, R2, x1, x2, y1, y2, a, b, dis;
    while(scanf("%lf%lf%lf%lf", &L ,&C, &R1, &R2) == 4) {
        if(L+C+R1+R2 == 0)  break;
        // (x-R1)^2 + (y-R1)^2 = R1^R1
        // (x-(L-R2))^2 + (y-(C-R2))^2 = R2^R2
        //double x1, x2, y1, y2;
        x1 = R1, y1 = R1;
        x2 = L-R2, y2 = C-R2;
        a = R1, b = R2;
        dis = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        if(a+b <= dis + 1e-6 && R1+R1 <= L && R1+R1 <= C && R2+R2 <= L && R2+R2 <= C)
            puts("S");
        else
            puts("N");
    }
    return 0;
}*/
