#include <bits/stdc++.h>
using namespace std;
bool check(int src, vector<int> adj[], vector<int> &visited)
{
    queue<pair<int, int>> q; //{node,parent}
    q.push({src, -1});
    visited[src] = 1;
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto adjNode : adj[node])
        {
            if (!visited[adjNode])
            {
                visited[adjNode] = 1;
                q.push({adjNode, node});
            }
            else
            {
                if (parent != adjNode)
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    int n = 9, m = 9; // n->nodes and m->edges
    vector<int> adj[n + 1] = {
        {}, {2, 3}, {1, 4, 5}, {1, 4}, {2, 3, 5}, {2, 4}, {7, 8}, {6, 8}, {7, 6}, {}};
    vector<int> visited(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (check(i, adj, visited))
                return 1; // --> returns true when atleast one component contains cycle
        }
    }
    return 0;
}