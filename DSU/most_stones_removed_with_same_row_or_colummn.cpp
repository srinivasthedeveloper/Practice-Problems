#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Question Link: https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/
*/
struct subset
{
    int parent;
    int rank;
};
int find(vector<subset> &Parent, int x)
{
    if (Parent[x].parent == -1)
    {
        return x;
    }
    return find(Parent, Parent[x].parent);
}
void Union(vector<subset> &Parent, int x, int y)
{
    if (Parent[x].rank < Parent[y].rank)
    {
        Parent[x].parent = y;
    }
    else if (Parent[x].rank > Parent[y].rank)
    {
        Parent[y].parent = x;
    }
    else
    {
        Parent[y].parent = x;
        Parent[x].rank++;
    }
    return;
}
bool isSameRow(vector<vector<int>> &stones, int i, int j)
{
    return stones[i][0] == stones[j][0];
}
bool isSameColumn(vector<vector<int>> &stones, int i, int j)
{
    return stones[i][1] == stones[j][1];
}
int removeStones(vector<vector<int>> &stones)
{
    int n = stones.size();
    // vector<vector<int>> edges;
    vector<subset> Parent(n, {-1, 0});
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (isSameRow(stones, i, j) or isSameColumn(stones, i, j))
            {
                int x = find(Parent, i);
                int y = find(Parent, j);
                if (x != y)
                {
                    Union(Parent, x, y);
                }
            }
        }
    }

    int co = 0;
    for (int i = 0; i < n; i++)
    {
        if (Parent[i].parent == -1)
        {
            co++;
        }
    }
    return n - co;
}
int main()
{
    // input nodes and edges
    int n;
    cin >> n;
    vector<vector<int>> stones(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        int u, w;
        cin >> u >> w;
        stones[i][0] = u;
        stones[i][1] = w;
    }
    int ans = removeStones(stones);
    cout << "Number of stones removed are" << ans << endl;

    return 0;
}