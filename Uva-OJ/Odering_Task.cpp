#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

using  namespace std;

#define LLI long long int
#define MAX 10000
#define row 60
#define col 60
#define memo(y) memset(y ,0 ,sizeof(y))


int order[row][col], taken[row], indegree[row], list[row];
int n;

void topo_sort (){
    int i, j, k, tmp;
    int invalid = 0;
    //memo (list);
    vector <int> kaj;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (!indegree[j] && !taken[j]){
                taken[j] = 1;
                //list[i] = j;
                kaj.push_back (j);
                for (k = 1; k <= n; k++)
                    if (order[j][k])
                        --indegree[k];
                break;
            }
//            if (j == n){
//                invalid = 1;
//                break;
//            }
        }
    }

//    printf ("%d ", kaj[0]);
//        for (i = 1; i < n; i++)
//            printf ("%d ", kaj[i]);
//    puts ("");
//    kaj.clear();


    cout << kaj[0];
    for(i = 1; i < n; i++)
        cout << " " << kaj[i];
    cout << endl;
    kaj.clear();
}


int main (){
    int i, j, ver, edg, src, des;
    while (scanf ("%d %d", &ver, &edg) == 2){
        if (ver == 0 && edg == 0) break;
//        memo (order);
//        memo (indegree);
//        memo (ordern);
//        memo (list);

        for (i = 1; i <= edg; i++){
            scanf ("%d %d", &src, &des);
            order[src][des] = 1;
            indegree[des]++;
        }
        topo_sort();
        memo (order);
        memo (indegree);
        memo (taken);
    }
    return 0;
}


/*void topsort()
{
    vector <int> task;
    int i,j,k;
    for(i = 1; i <= n;i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(!taken[j] && !indegree[j])
            {
                taken[j] = 1;
                task.push_back(j);
                for(k = 1; k <= n; k++)
                    if(order[j][k])
                        --indegree[k];
                break;
            }
        }
    }
    cout << order[0];
    for(i = 1; i < n; i++)
    cout << " " << order[i];
    cout << endl;
    task.clear();
}

int main()
{
    int a,b,i,m;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0)    break;
        for(i = 1; i <= m; i++)
        {
            cin>> a>> b;
            order[a][b] = 1;
            indegree[b]++;
        }
        topsort();
        memo (order);
        memo (indegree);
        memo (taken);
    }
    return 0;
}
*/
