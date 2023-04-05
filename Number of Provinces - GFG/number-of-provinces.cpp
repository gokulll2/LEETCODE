//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    private:
      void dfs(int node,vector<int>adjLS[],int vis[])
    {
        vis[node]=1;
        for(auto it:adjLS[node])
        {
            if(!vis[it])
            {
                dfs(it,adjLS,vis);
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int>adjLS[V];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j]==1 && i!=j)
                {
                    adjLS[i].push_back(j);
                    adjLS[j].push_back(i);
                }
            }
        }
        int vis[V]={0};
        int cnt=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i,adjLS,vis);
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
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends