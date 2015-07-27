#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <queue>
#include <stack>
#include <map>
#include <list>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

#define max 99999
#define l long
#define ll long

/*int p = 5000, prime[max];
int main(){
    // This method saving memory
    int i, j, root;
    for (i = 2; i <= p >> 1; i++)
        prime[i] = 0;
    root = sqrt(p);
    for (i = 3; i <= root; i += 2){
        if (prime[i >> 1] == 0){
            for (j = i*i; j <= p; j += i + i)
                prime[j >> 1] = 1;
        }
    }
    printf("2 ");
    for (i = 3; i <= p; i += 2){
        if (prime[i >> 1] == 0){
            printf ("%d ", i);
        }
    }
    // This method not saving memory
    /*for (i = 2; i <= p; i++)
        prime[i] = 0;
    root = sqrt(p);
    for (i = 3; i <= root; i += 2){
        if (prime[i] == 0){
            for (j = i*i; j <= p; j += i + i)
                prime[j] = 1;
        }
    }
    printf("2 ");
    for (i = 3; i <= p; i += 2){
        if (prime[i] == 0){
            printf ("%d ", i);
        }
    }*/
//}

    //return 0;
//}
//for(i=1000000; i<1000050; i++) if(status[i]==true) cout << i << " ";

int N = 5000;

bool isprime(int i){
    int root = sqrt(i);  // or root = int (sqrt((double) i));
    for (int j = 3; i <= root; j+=2){
        if (i % j == 0)
            return false;
    }
    return true; // no int less then i, divides i, so i is a prime
}

int main(){
    printf ("2 ");
    for (int i = 3; i <= N; i+=2){
        if (isprime(i) == true)
            printf("%d ", i);
    }
    return 0;
}

/*#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 99

bool status[N+1];
int prime[N+1], list[N+1];
void list_prime();

using namespace std;

void list_prime(){
    int i, j, sqrtN;
    status[1] = false;
    for(i = 2; i <= N; i++)
        status[i] = true;
    sqrtN = sqrt(N);
    for(i = 3; i <= sqrtN; i += 2){
        if( status[i] == true){
            for(j = i * i; j <= N; j += i + i)
                status[j] = false;
        }
    }
    /*prime[0] = 2;
    j = 1;
    for(i = 3; i <= N; i += 2){
        if(status[i] == true){
            prime[j++] = i;
        }
    }*/
//}

/*int main(){
    //list_prime();
    prime[0] = 2;
    int j = 1;
    printf ("2 ");
    for(int i = 3; i <= N; i += 2){
        if(status[i] == false){
            prime[j++] = i;
            printf ("%d ", i);
        }
    }
    return 0;
}*/


