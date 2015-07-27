#include <stdio.h>

int main()
{
    long long int n, solution;
    while (scanf ("%lld", &n) == 1){
        solution = (n/2 + 2) * (n/2 + 1) / 2;
        printf ("%lld\n", solution);
    }
    return 0;
}
