#include <bits/stdc++.h>
using namespace std;

int dfs(int row, int col, vector<vector<int>> graph, vector<vector<int>> &vis)
{
    int n = graph.size();
    int m = graph[0].size();
    int ans = graph[row][col];
    vis[row][col] = 1;
    int delta[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (int i = 0; i < 4; i++)
    {
        int r = row + delta[i][0], c = col + delta[i][1];
        if (r >= 0 && r < n && c >= 0 && c < m && vis[r][c] == 0 && graph[r][c] > 0)
        {
            ans += dfs(r, c, graph, vis);
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        vector<vector<int>> graph;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            for (int j = 0; j < m; j++)
            {
                int z;
                cin >> z;
                v.push_back(z);
            }
            graph.push_back(v);
        }
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && graph[i][j] > 0)
                {
                    int k = dfs(i, j, graph, vis);
                    ans = max(ans, k);
                }
            }
        }
        cout << ans << endl;
    }
}