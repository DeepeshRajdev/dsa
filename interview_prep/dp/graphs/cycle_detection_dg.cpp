#include <bits/stdc++.h>
using namespace std;
// approach-->> node should not not be revisited in same path
bool dfs(int node, vector<vector<int>> graph, vector<int> &vis, vector<int> &path)
{
    vis[node] = 1;
    path[node] = 1; // included in path
    for (auto adjNode : graph[node])
    {
        if (!vis[adjNode])
        {
            if (dfs(adjNode, graph, vis, path))
                return true;
        }
        else if (path[adjNode] == 1)
            return true;
    }
    path[node] = 0; // backtrack
    return false;
}
int main()
{
    vector<vector<int>> graph = {{}, {2}, {3, 6}, {4}, {5}, {}, {4}, {9}, {7}, {8}};
    int n = graph.size();
    vector<int> vis(graph.size(), 0);
    vector<int> path(graph.size(), 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && dfs(i, graph, vis, path))
        {
            cout << "cycle detected" << endl;
            return 0;
        }
    }

    cout << "no cycle detected" << endl;
}