#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Question Link: https://leetcode.com/problems/number-of-provinces/
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
int findCircleNum(vector<vector<int>> &isConnected)
{
    vector<vector<int>> edges;
    int n = isConnected.size();
    vector<int> parent(n + 1, 0);
    vector<int> rank(n + 1, 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j and isConnected[i][j] == 1)
            {
                vector<int> row(2, 0);
                row[0] = i + 1;
                row[1] = j + 1;
                edges.push_back(row);
            }
        }
    }
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        u = find(u, parent);
        v = find(v, parent);
        if (u != v)
        {
            Union(u, v, rank, parent);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (parent[i] == i)
        {
            ans++;
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
    vector<vector<int>> connections(v, vector<int>(v, 0));
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> connections[i][j];
        }
    }
    int ans = findCircleNum(connections);
    cout << "Number of provinces are" << ans << endl;

    return 0;
}