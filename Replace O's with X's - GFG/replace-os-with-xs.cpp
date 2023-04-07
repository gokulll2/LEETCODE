//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(int row,int col,vector<vector<char>>&mat, vector<vector<int>>&visited)
    {
        visited[row][col]=1;
        int n=mat.size();
        int m=mat[0].size();
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && mat[nrow][ncol]=='O' && !visited[nrow][ncol])
            {
                //  mat[nrow][ncol]='X';
                dfs(nrow,ncol,mat,visited);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        //  int delrow[]={-1,0,+1,0};
        // int delcol[]={0,+1,0,-1};
        
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int j=0;j<m;j++)
        {
            //FIRST COLUMN
            
            if(!visited[0][j] && mat[0][j]=='O')
            {
                dfs(0,j,mat,visited);
            }
            
            //LAST COLUMN
            
            if(!visited[n-1][j] && mat[n-1][j]=='O')
            {
                dfs(n-1,j,mat,visited);
            }
        }
        for(int i=0;i<n;i++)
        {
            //FIRST ROW
            
            if(!visited[i][0] && mat[i][0]=='O')
            {
                dfs(i,0,mat,visited);
            }
            //LAST ROW
            if(!visited[i][m-1] && mat[i][m-1]=='O')
            {
                dfs(i,m-1,mat,visited);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] && mat[i][j]=='O')
                {
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends