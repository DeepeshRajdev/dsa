#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adj[], vector<int> &visited)
{
    visited[node] = 1;
    cout << node << " ";
    for (auto it : adj[node])
    {
        if (visited[it] == 0)
        {
            visited[it] = 1;
            dfs(it, adj, visited);
        }
    }
}
int main()
{
    int n = 5, m = 6; // n->nodes and m->edges
    vector<int> adj[n + 1] = {
        {}, {2, 3}, {1, 4, 5}, {1, 4}, {2, 3, 5}, {2, 4}};

        vector<int> visited(n + 1, 0);
    int s = 2;
    dfs(4, adj, visited);
}