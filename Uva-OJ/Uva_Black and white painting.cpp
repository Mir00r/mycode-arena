#include <stdio.h>

int main (){
    int n, m, c, temp, result;
    while (1){
        scanf ("%d%d%d", &n, &m, &c);
        if (n == 0 && m == 0 && c == 0)
            break;
        temp = (n - 7) * (m - 7);
        result = temp / 2;
        if (temp % 2 == 1 && c == 1)
            result++;
            printf ("%d\n", result);
    }
    return 0;
}
