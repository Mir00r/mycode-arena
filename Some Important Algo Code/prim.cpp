#include <stdio.h>
#include <vector>
#include<queue>
using namespace std;

#define max 30
#define inf 1<<20
vector < int > adj[101];
int key[max], pie[max], flag[max], w[max][max];
int nodes;
struct node
{
	int i,key;
};
// From net but Bujte pary nai....
bool operator < (const node& a, const node& b)
{
	return (a.key > b.key);
}
priority_queue < node > Q;//node type er priority queue
void update()
{
	while(!Q.empty())  //while Q != Æ do
		Q.pop();
	for(int i = 0; i < nodes; i++)
	{
		if(flag[i] == 0)
		{
			node t;
			t.i = i;
			t.key = key[i];
			Q.push(t);
		}
	}
}
int main()
{
	int edges, i, j;
	printf("Enter no of nodes\n");
	scanf("%d",&nodes);
	printf("Enter no of edges\n");
	scanf("%d",&edges);

	//////////Graph input//////////

	for(int i = 0; i < nodes; i++)
	{
		int from, to, weight;
		scanf("%d%d%d", &from, &to, &weight);
		adj[from].push_back(to);
		adj[to].push_back(from);
		w[from][to] = weight;
		w[to][from] = weight;
	}
	////////input complete//////////////

	for(int i = 0; i < nodes; i++)
	{
		key[i] = inf;
		pie[i] =-1; //pie for parent Null kora hoise.
	}
	key[0] = 0;

	//push all the nodes in queue

	for(int i = 0; i < nodes; i++)
	{
		node e;
		e.i = i;
		e.key = key[i];
		Q.push(e);
	}
	//insert each vertex with their key value in queue complete

	while(!Q.empty()) //while Q != Æ do
	{
		node e = Q.top();
		Q.pop();
		int u = e.i;
		//printf("%d\n",u);
		flag[u] = 1;
		for(int j = 0; j < adj[u].size(); j++)  // u ¬ ExtractMin(Q)  // making u part of T
                                                //for each v Î Adj[u] do
		{
			int v = adj[u][j];
			if(flag[v] == 0 && w[u][v] < key[v]) //if v Î Q and w(u,v) < key[v] then
			{
				pie[v] = u; //p[v] ¬ u
				key[v] = w[u][v]; //key[v] ¬ w(u,v)
				update();
			}
		}
	}
	int sum = 0;
	for(int i = 0; i < nodes; i++)
	{
		sum += key[i];
	}
	printf("Minimum spaning tree will be %d\n",sum);
	return 0;
}
