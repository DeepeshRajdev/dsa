#include <bits/stdc++.h>
using namespace std;
// topo sort->> if there is a edge u->v then u shold come before v

// before moving to prv dfs call push the node in the stack
void dfs(int node, vector<vector<int>> graph, vector<int> &vis, stack<int> &s)
{
    vis[node] = 1;
    for (auto adjNode : graph[node])
    {
        if (!vis[adjNode])
            dfs(adjNode, graph, vis, s);
    }
    s.push(node);
}
int main()
{
    vector<vector<int>> graph = {{}, {2}, {3, 6}, {4}, {5}, {}, {4}};
    int n = graph.size();
    vector<int> vis(n, 0);
    vector<int> topo;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i, graph, vis, s);
    }
    while (!s.empty())
    {
        topo.push_back(s.top());
        s.pop();
    }
    cout << "topological sorting --> ";
    for (auto x : topo)
        cout << x << " ";
    cout << endl;
}