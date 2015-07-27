/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define LLI __int64
#define MAX 2005

int main(){
    int a[MAX], n, k, cnt, i, j, ans, tmp, check;
    scanf ("%d%d", &n, &k);
    for (i = 0; i < n; i++) scanf ("%d", &a[i]);
    cnt = tmp = ans = 0;
    for (i = 0; i < n; i++){
        if (a[i] <= k) cnt++;
    }
    if (cnt % 3 == 0) printf ("%d\n", cnt/3);
    else puts ("0");
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <set>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1005
#define LLI __int64

set <char> alpa;

int main (){
    char str[MAX];
    int len, n, cnt, ans, i, j, tmp;
    gets (str);
    len = strlen (str);
    //printf ("%d\n", len);
    cnt = ans = tmp = 0;
    for (i = 0; i < len; i++){
        if (str[i] >= 'a' && str[i] <= 'z') alpa.insert (i);
    }
    printf ("%d\n", alpa.size());
//    for (i = 0; i < len; i++){
//        if (str[i] >= 'a' && str[i] <= 'z')
//            //if ()
//            cnt++;
//    }
    //printf ("%d\n", cnt);
    return 0;
}
