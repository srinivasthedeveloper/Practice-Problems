#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Question Link: https://leetcode.com/problems/number-of-operations-to-make-network-connected/
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
int makeConnected(int n, vector<vector<int>> &connections)
{
    vector<int> parent(n + 1, 0);
    vector<int> rank(n + 1, 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    int red_conn = 0;
    for (int i = 0; i < connections.size(); i++)
    {
        int u = connections[i][0];
        int v = connections[i][1];
        u = find(u, parent);
        v = find(v, parent);
        if (u != v)
        {
            Union(u, v, rank, parent);
        }
        else
        {
            red_conn++;
        }
    }
    int no_conn = connections.size();
    if (no_conn < n - 1)
        return -1;
    int n_comp = 0;
    for (int i = 0; i < n; i++)
    {
        if (parent[i] == i)
        {
            // cout<<i<<" ";
            n_comp++;
        }
    }
    // cout<<endl;
    if (red_conn < n_comp - 1)
        return -1;
    return n_comp - 1;
}
int main()
{
    // input nodes and edges
    int v;
    cin >> v;
    int e;
    cin >> e;
    vector<vector<int>> connections(e, vector<int>(2, 0));
    for (int i = 0; i < e; i++)
    {
        int u, w;
        cin >> u >> w;
        connections[i] = {u, w};
    }
    int ans = makeConnected(v, connections);
    cout << "Number of povinces are" << ans << endl;

    return 0;
}