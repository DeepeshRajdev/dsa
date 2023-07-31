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
    int n = 8, m = 9; // n->nodes and m->edges
    vector<int> adj[n + 1] = {
        {}, {2, 3}, {1, 4, 5}, {1, 4}, {2, 3, 5}, {2, 4}, {7, 8}, {6, 8}, {7, 8}};
    vector<int> visited(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited); // no. of times this line will get executed === no. of components of graph
        }
    }
}