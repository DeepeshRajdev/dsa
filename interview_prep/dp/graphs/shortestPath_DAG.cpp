#include <bits/stdc++.h>
using namespace std;
// step 1)toposort
// step 2)relaxation
// relax all adj nodes of top of stack
void dfs(int node, vector<vector<pair<int, int>>> graph, vector<int> &vis, stack<int> &s)
{
    vis[node] = 1;
    for (auto it : graph[node])
    {
        int adjNode = it.first;
        if (!vis[adjNode])
            dfs(adjNode, graph, vis, s);
    }
    s.push(node);
}
int main()
{
    vector<vector<pair<int, int>>> graph = {{{1, 1}}, {{2, 1}}, {{3, 2}, {6, 3}}, {{4, 1}}, {{5, 2}}, {}, {{4, 1}}};
    int n = graph.size();
    vector<int> vis(n, 0);

    stack<int> s;
    vector<int> dis(n, INT_MAX);
    dis[0] = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i, graph, vis, s);
    }
    while (!s.empty())
    {
        int node = s.top();
        s.pop();
        for (auto it : graph[node])
        {
            int adjNode = it.first;
            int weight = it.second;
            if (dis[node] + weight < dis[adjNode])
                dis[adjNode] = dis[node] + weight;
        }
    }
    for (int i = 0; i < n; i++)
        cout << dis[i] << " ";
}