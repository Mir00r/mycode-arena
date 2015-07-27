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
#define MAX 100005
#define row 70
#define col 70
#define pb push_back
#define NL puts ("")
#define inf (1 << 29)
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define eps 0.000000001
#define maxs (int)(1e5+10)

typedef long long Long ;

using namespace std;


struct info {
    Long prop,sum;
}tree[3*maxs];


void update (int node,int b,int e,int i,int j,Long val);
Long query (int node,int b,int e,int i,int j,Long car);

int main ()
{
    int t,n,c,op,p,q,add,kase=0;
    scanf ("%d",&t);
    while (t--){
        scanf ("%d %d",&n,&c);
        memset (tree,0,sizeof (tree));
        printf ("Case %d:\n",++kase);
        while (c--){
            scanf ("%d",&op);
            if (op==0){
                scanf ("%d %d %d",&p,&q,&add);
                update(1,0,n-1,p,q,add);
            }
            else {
                scanf ("%d %d",&p,&q);
                Long res=query(1,0,n-1,p,q,0);
                //printf ("sum = %lld\n",tree[12].sum);
                printf ("%lld\n",res);
            }
        }
    }
    return 0;
}

void update (int node,int b,int e,int i,int j,Long val)
{
    if (i>e || j<b) return ;
    if (b>=i && e<=j){
        tree[node].prop+=val;
        tree[node].sum+=((e-b+1)*val);
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid =(b+e)/2;
    update(left,b,mid,i,j,val);
    update(right,mid+1,e,i,j,val);
    tree[node].sum=tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;
}


Long query (int node,int b,int e,int i,int j,Long  car)
{
    if (i>e || j<b) return 0;
    if (b>=i && e<=j) return tree[node].sum+(e-b+1)*car;

    int left=2*node;
    int right=2*node+1;
    int mid =(b+e)/2;
    return query (left,b,mid,i,j,car+tree[node].prop) + query(right,mid+1,e,i,j,car+tree[node].prop);
}

