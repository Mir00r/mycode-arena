#include <stdio.h>
#include <queue>
#include <algorithm>
#define maxs 55
using namespace std;


char grid[maxs][maxs];

int dir [4][2]={{-1,0},{1,0},{0,1},{0,-1}},infight;
int n;


void findp (int si,int sj);

void sector (int si,int sj);
bool isvalid (int i,int j);


int main ()
{
    int i,j;
    while (1){
        scanf ("%d",&n);
        if (n==0) break;

        getchar ();

        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                scanf ("%c",&grid[i][j]);
            }
            getchar ();
        }


        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                if (grid[i][j]=='*'){
                    sector (i,j);
                }
            }
        }
    }
    return 0;
}


void sector (int si,int sj)
{
    int i,j,J=sj,pak=0;
    printf ("%d %d ",si+1,sj+1);
    for (i=si;grid[i][J]=='*' || grid[i][J]=='P' || grid[i][J]=='P' || grid[i][J]=='B' ;i++){
        for (j=sj;grid[i][j]=='*'|| grid[i][j]=='P'|| grid[i][j]=='B';j++){
           // printf ("%d %d\n",i+1,j+1);
            if (grid[i][j]=='P'){
                pak++;
                //printf ("%d %d\n",i+1,j+1);
                findp(i,j);
            }
        }
    }

    for (i=si;grid[i][J]=='*'|| grid[i][J]=='P'|| grid[i][J]=='B';i++){
        for (j=sj;grid[i][j]=='*'|| grid[i][j]=='P' || grid[i][j]=='B';j++){
            grid[i][j]='#';
        }
    }
    printf ("%d\n",pak);
}



void findp (int si,int sj)
{
    grid[si][sj]='p';

    queue <int> q;
    q.push (si);
    q.push (sj);

    int i,ti,tj;

    while (!q.empty ()){
      si=q.front (),q.pop ();
      sj=q.front (),q.pop ();
      for (i=0;i<4;i++){
        ti=si+dir[i][0];
        tj=sj+dir[i][1];
        if (isvalid (ti,tj)){
            if (grid[ti][tj]=='P'){
               // printf ("%d %d\n",ti+1,tj+1);
                grid[ti][tj]='p';
                q.push (ti);
                q.push (tj);
            }
        }
      }
    }

}


bool isvalid (int i,int j)
{
    if (i<0)
        return false;

    if (i==n)
        return false;

    if (j<0)
        return false;

    if (j==n)
        return false;

    if (grid[i][j]!='P')
            return false;

    return true;

}
