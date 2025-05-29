/*
To find the connected components in an undirected graph.
Input:
n = 5
edges = {{0, 1}, {1, 2}, {3, 4}}
Output:
[[0, 1, 2], [3, 4]]
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> connectedComponents(int n, vector<vector<int>> &edges)
{
    vector<vector<int>> adj(n);
    for (auto &edge : edges)
    {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    vector<bool> visited(n, false);
    vector<vector<int>> result;
    for (int i = 0; i < n; ++i)
    {
        if (visited[i])
        {
            continue;
        }
        vector<int> component;
        queue<int> q;
        q.push(i);
        visited[i] = true;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            component.push_back(node);
            for (int neighbor : adj[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        result.push_back(component);
    }
    return result;
}