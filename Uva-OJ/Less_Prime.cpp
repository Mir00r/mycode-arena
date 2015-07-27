#include <stdio.h>
#define MAX 10000

using namespace std;

int prime[MAX + 1], is_prime[MAX + 1], count = 0;

void list_prime()
{
    is_prime[count++] = 1;
    for (int i = 2; i <= MAX; i++)
        if(!prime[i])
        {
            is_prime[count++] = i;
            for (int j = i; i * j <= MAX; j++)
                prime[i * j] = 1;
        }
}

int main()
{
    list_prime();
    int t, i, j, N;
    scanf ("%d", &t);
    for(i = 1; i <= t; i++)
    {
        scanf ("%d", &N);
        for(j = 2; j <= N; j++)
        {
            //printf ("is_Prime = %d\n", is_prime[j]);
            if(is_prime[j])
            {
                if(2*is_prime[j] > N)
                {
                    printf ("%d\n", is_prime[j]);
                    break;
                }
            }
        }
    }
    return 0;
}
