#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Question Link: https://leetcode.com/problems/redundant-connection/
*/
int find(int u, vector<int> &parent)
{
    if (parent[u] == u)
    {
        return u;
    }
    return parent[u] = find(parent[u], parent);
}
void Union(int u, int v, vector<int> &rank, vector<int> &parent)
{
    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}
vector<int> findRedundantConnection(vector<vector<int>> &edges)
{
    int n = edges.size();
    vector<int> parent(n + 1, 0);
    vector<int> rank(n + 1, 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    vector<int> ans(2);
    for (int i = 0; i < n; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        u = find(u, parent);
        v = find(v, parent);
        if (u != v)
        {
            Union(u, v, rank, parent);
        }
        else
        {
            ans[0] = edges[i][0];
            ans[1] = edges[i][1];
        }
    }
    return ans;
}
int main()
{
    // input nodes and edges
    int v;
    cin >> v;
    int e;
    cin >> e;
    vector<vector<int>> edges;
    for (int i = 0; i < e; i++)
    {
        int u, w;
        cin >> u >> w;
        edges.push_back({u, w});
    }
    vector<int> ans(findRedundantConnection(edges));
    cout << "Redundant connections are" << endl;
    cout << ans[0] << "-" << ans[1] << endl;

    return 0;
}