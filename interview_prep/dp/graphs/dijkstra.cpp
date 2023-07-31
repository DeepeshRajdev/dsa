#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<pair<int, int>>> graph = {{{1, 1}}, {{2, 1}}, {{3, 2}, {6, 3}}, {{4, 1}}, {{5, 2}}, {}, {{4, 1}}};
    int src = 0;
    vector<int> dis(graph.size(), INT_MAX);
    dis[src] = 0;
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
            }
        }
    }
    for (int i = 0; i < graph.size(); i++)
        cout << dis[i] << " ";
}