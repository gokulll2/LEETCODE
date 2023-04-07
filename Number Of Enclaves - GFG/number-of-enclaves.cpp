//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int row,int col,vector<vector<int>> &grid,vector<vector<int>> &visited,int &cnt)
    {
        visited[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        
        cnt++;
        
        // cout<<grid[row][col]<<" ";
        
        for(int i=0;i<4;i++)
        {
            int nrow=delrow[i]+row;
            int ncol=delcol[i]+col;
            if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && grid[nrow][ncol]==1 && visited[nrow][ncol]==0)
            {
                dfs(nrow,ncol,grid,visited,cnt);
            }
        }
    }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int cnt=0;
        for(int j=0;j<m;j++)
        {
            //first row
            
            if(!visited[0][j] && grid[0][j]==1)
            {
                dfs(0,j,grid,visited,cnt);
            }
            //last row
            if(!visited[n-1][j] & grid[n-1][j]==1)
            {
                dfs(n-1,j,grid,visited,cnt);
            }
        }
        for(int i=0;i<n;i++)
        {
            //First Column
            
            if(!visited[i][0] && grid[i][0]==1)
            {
                dfs(i,0,grid,visited,cnt);
            }
            
            //Last Column
            
            if(!visited[i][m-1] && grid[i][m-1]==1)
            {
                dfs(i,m-1,grid,visited,cnt);
            }
        }
         cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] && grid[i][j]==1)
                {
                    // cout<<" ********";
                    dfs(i,j,grid,visited,cnt);
                }
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends