#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define clr(a) memset(a,0,sizeof(a))
#define PB push_back
#define pi 3.1415926535897932384626433832795

int n,order[120][120],indegree[120],taken[120];


void topsort()
{
    vector<int>task;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(!taken[j] && !indegree[j])
            {
                taken[j]=1;
                task.PB(j);
                for(k=1;k<=n;k++)
                    if(order[j][k])
                        --indegree[k];
                break;
            }
        }
    }
    cout<<task[0];
    for(i=1;i<n;i++)
    cout<<" "<<task[i];
    cout<<endl;
    task.clear();
}

int main()
{
    int a,b,i,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)    break;
        for(i=1;i<=m;i++)
        {
            cin>>a>>b;
            order[a][b]=1;
            indegree[b]++;
        }
        topsort();
        clr(order);
        clr(indegree);
        clr(taken);
    }
    return 0;
}




/*#include <stdio.h>
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


int take[row][col], taken[row], indegree[row], list[row];
int n, ver, edg;


// when take[a][b] = 1, that means a must come before b
// indegree[i] = number of items that that must come before i
// when taken[i] = 1, means we already have taken ith item


void topo_sort (){
    int i, j, k, tmp;
    int invalid = 0;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (!indegree[j] && !taken[j]){
                taken[j] = 1;
                list[i] = j;

                // in this step we are taking item j
                // we'd update the indegree[k] of items that depended on j

                for (k = 1; k <= n; k++)
                    if (!taken[k] && !take[j][k])
                        --indegree[k];
                break;
            }
            if (j == n){
                invalid = 1;
                break;
            }
        }
    }

    if (invalid) puts ("There is no solution");
    else
        for (i = 0 ; i < n; i++)
            printf ("%d ", list[i]);
    puts ("");
}


int main (){
    int i, j, ans, res, src, des;
    while (scanf ("%d %d", &ver, &edg) == 2){
        memo (take);
        memo (indegree);
        memo (list);
        for (i = 1; i <= edg; i++){
            scanf ("%d %d", &src, &des);
            take[src][des] = 1;
            indegree[des]++;
        }
        topo_sort();
    }
    return 0;
}

*/


/*
// when take[a][b] = 1, that means a must come before b
// indegree[i] = number of items that that must come before i
// when taken[i] = 1, means we already have taken ith item
int invalid = 0;
for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++)
        if( !indegree[j] && !taken[j]){
            taken[j] = 1;
            list[i] = j;
            // in this step we are taking item j
            // we'd update the indegree[k] of items that depended on j
            for(k = 0; k < n; k++)
                if( !taken[k] && take[j][k] )
                    --indegree[k];
            break;
        }
        if( j == n ) {
            invalid = 1;
            break;
        }
}

if( invalid ) printf("There is no solution\n");
else for(i=0; i<n; i++) printf("%d\n", list[i] );
*/
