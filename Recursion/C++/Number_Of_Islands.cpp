/*
Problem Statement

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. 
You may assume all four edges of the grid are all surrounded by water.
*/

// CODE

#include<bits/stdc++.h>
using namespace std;

void DepthFirstSearch(vector<vector<int>> &mat, int i, int j, int row, int col)
{
    if (i < 0 || j < 0 || i > (row - 1) || j > (col - 1) || mat[i][j] != 1){        // If index is not in range within range then return
        return;
    }
    if (mat[i][j] == 1){
        mat[i][j] = 0;
        DepthFirstSearch(mat, i + 1, j, row, col);
        DepthFirstSearch(mat, i - 1, j, row, col);
        DepthFirstSearch(mat, i, j + 1, row, col);
        DepthFirstSearch(mat, i, j - 1, row, col);
    }
}

int NumIslands(vector<vector<int>> &mat, int row, int col){
    int count = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (mat[i][j] == 1){
                mat[i][j] = 0;
                count++;
                DepthFirstSearch(mat, i + 1, j, row, col);
                DepthFirstSearch(mat, i - 1, j, row, col);
                DepthFirstSearch(mat, i, j + 1, row, col);
                DepthFirstSearch(mat, i, j - 1, row, col);
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m;
        vector<vector<int>> mat;
        for(int i=0;i<n;i++){
            vector<int> p;
            for(int j=0;j<m;j++){
                cin>>x;
                p.push_back(x);
            }
            mat.push_back(p);
        }
        cout<<NumIslands(mat,n,m)<<endl;
    }
    return 0;
}

/* 
OUTPUT

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
*/
