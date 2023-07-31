#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, m = 6; // n->nodes and m->edges
    vector<int> adj[n + 1] = {
        {}, {2, 3}, {1, 4, 5}, {1, 4}, {2, 3, 5}, {2, 4}};
    queue<int> q;
    vector<int> bfs;
    vector<int> visited(n + 1, 0);
    int s = 2;

    q.push(s);
    visited[s] = 1;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        bfs.push_back(p);
        for (int i : adj[p])
        {
            if (visited[i] != 1)
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    for (int x : bfs)
        cout << x << " ";
    cout << endl;
}