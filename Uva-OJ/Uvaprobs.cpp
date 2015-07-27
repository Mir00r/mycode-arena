#include "Uvaprobs.h"

TreeMap<int, int> *Uvaprobs::dist = new TreeMap <int, int>();

int Uvaprobs::isBipartite(int sr)
{
	   std::list<int> q = std::list<int>();
	   dist->put(sr, 0);
	   q.push_back(sr);
	   int counter[2];
	   counter[0] = 1;
	   while (!q.empty())
	   {
		   int curr = q.pop_front();
		   for (int i = 0; i < adjList[curr].size(); i++)
		   {
			   int v = adjList[curr].get(i);
			   if (dist->containsKey(v))
			   {
				   if (dist->get(v) == dist->get(curr))
				   {
					   return -1;
				   }
			   }
			   else
			   {
				   dist->put(v,1 - dist->get(curr));
				   counter[1 - dist->get(curr)]++;
				   q.push_back(v);
			   }
		   }
	   }
	   if (counter[0] == 0 || counter[1] == 0)
	   {
		   return 1;
	   }
	   return __min(counter[0], counter[1]);
}

void Uvaprobs::main(std::wstring args[]) throw(std::exception)
{
	Scanner *in_Renamed = new Scanner(System::in);
	StringBuilder *out = new StringBuilder();
	int t = in_Renamed->nextInt();
	int n, e, v1, v2, res, curr;
	bool flag;
	for (int i = 0; i < t; i++)
	{
		res = 0;
		flag = false;
		n = in_Renamed->nextInt();
		adjList = new std::list[n];
		dist->clear();
		for (int j = 0; j < n; j++)
		{
			adjList[j] = std::list<int>();
		}
		e = in_Renamed->nextInt();
		for (int j = 0; j < e; j++)
		{
			v1 = in_Renamed->nextInt();
			v2 = in_Renamed->nextInt();
			adjList[v1].push_back(v2);
			adjList[v2].push_back(v1);
		}
		for (int j = 0; j < n; j++)
		{
			if (!dist->containsKey(j))
			{
				curr = isBipartite(j);
				if (curr != -1)
				{
					res += curr;
				}
				else
				{
					flag = true;
					break;
				}
			}
		}
		if (!flag)
		{
			out->append(res + std::wstring(L"\n"));
		}
		else
		{
			out->append(-1 + std::wstring(L"\n"));
		}
	}
	std::cout << out;
}
