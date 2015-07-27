#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define sf scanf
#define pf printf
#define MAX 2000

//int main()
//{
//    int n;
//    sf("%d",&n);
//    int ar[n],br[n];
//    vector <int> my;
//    for(int i=0;i<n;i++)
//    {
//        sf("%d",&ar[i]);
//        br[i]=ar[i];
//    }
//    sort(br,br+n);
//
//    for(int i=0;i<n;i++)
//    {
//        if(br[i]!=ar[i])
//        {
//            int j;
//            for(j=i+1;j<n;j++)
//            {
//                if(br[i]==ar[j]) break;
//            }
//            my.push_back(i);
//            my.push_back(j);
//            swap(ar[i],ar[j]);
//        }
//    }
//
//    int siz = my.size()/2;
//    pf("%d\n",siz);
//    int ct=0;
//    for(int i=0;i<my.size();i++)
//    {
//        ct++;
//        if(ct==1) pf("%d ",my[i]);
//        else if(ct==2)
//        {
//            pf("%d\n",my[i]);
//            ct=0;
//        }
//    }
//    return 0;
//}

/*int main(){
    int n, i, j;
    cin>>n;
    int arr[n],sor[n];
    for (i = 0; i < n;i++){
        cin >> arr[i];
        sor[i] = arr[i];
    }
    sort(sor, sor+n);
    cout << n << endl;

    for (i = 0; i < n; i++){
        for (j = i; j < n; j++)
            if (sor[i] == arr[j]){
                swap(arr[i], arr[j]);
                cout<<i<<" "<<j<<endl;
                break;
            }
    }
    return 0;
}
*/

int main(){
    int tc, cs=1, i, j, k, n, tmp, cnt, arr[MAX];
    scanf ("%d", &tc);
    while (tc--){
        scanf ("%d", &n);
        for (k = 1; k <= n; k++) scanf ("%d", &arr[k]);
        cnt = 0;
        for (i = 1; i <= n; i++)
            if (arr[i] != i){
                for (j = i+1; j <= n; j++)
                    if (arr[j] == i){
                        tmp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = tmp;
                        cnt++;
                    }
            }
            printf ("Case %d: %d\n", cs++, cnt);
    }
    return 0;
}
