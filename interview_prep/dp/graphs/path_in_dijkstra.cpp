#include <bits/stdc++.h>
using namespace std;
// parent array -->to know where this edge came from
int main()
{
    vector<vector<pair<int, int>>> graph = {{{1, 1}}, {{2, 1}}, {{3, 2}, {6, 3}}, {{4, 1}}, {{5, 2}}, {}, {{4, 1}}};
    int src = 0, des = 5;
    vector<int> dis(graph.size(), INT_MAX);
    dis[src] = 0;
    vector<int> parent(graph.size(), -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        for (auto x : graph[node])
        {
            int weight = x.second;
            int adjNode = x.first;

            if (dis[node] + weight < dis[adjNode])
            {
                dis[adjNode] = dis[node] + weight;
                pq.push({dis[adjNode], adjNode});
                parent[adjNode] = node; // only difference
            }
        }
    }
    // work is done bro
    // now only we taking path
    vector<int> path;
    int node = des;
    while (parent[node] != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(src);
    reverse(path.begin(), path.end());
    for (int x : path)
        cout << x << " ";
}