#include <bits/stdc++.h>
using namespace std;
// topo sort->> if there is a edge u->v then u shold come before v

/*approach-->
1)push all nodes with indegree 0
2)take the queue top and decrement indegree of all its adjacent nodes
  */
int main()
{
    vector<vector<int>> graph = {{}, {2}, {3, 6}, {4}, {5}, {}, {4}};
    int n = graph.size();
    vector<int> vis(n, 0);
    vector<int> topo;
    vector<int> indegree(n, 0);
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        for (auto it : graph[i])
            indegree[it]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int p = q.front();
        topo.push_back(p);
        q.pop();
        for (int adjNode : graph[p])
        {
            indegree[adjNode]--;
            if (indegree[adjNode] == 0)
                q.push(adjNode);
        }
    }
    cout << "topological sorting --> ";
    for (auto x : topo)
        cout << x << " ";
    cout << endl;
}