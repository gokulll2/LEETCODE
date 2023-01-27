//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool checkSameGroup(vector<int>&stone1 , vector<int>&stone2)
    {
        if(stone1[0]==stone2[0] || stone1[1]==stone2[1])
        {
            return true;
        }
        return false;
    }
    void dfs(vector<int>&visited , vector<vector<int>>&stones , int index)
    {
        visited[index]=1;
        for(int i=0;i<stones.size();i++)
        {
            if(!visited[i] && checkSameGroup(stones[index],stones[i]))
            {
                dfs(visited,stones,i);
            }
        }
    }
    int maxRemove(vector<vector<int>>& stones, int n) {
        // Code here
        vector<int>visited(n+1,0);
        int components=0;
        for(int i=0;i<stones.size();i++)
        {
            if(!visited[i])
            {
                components++;
                dfs(visited,stones,i);
            }
        }
        return n-components;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < 2; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;

        cout << obj.maxRemove(adj, n) << "\n";
    }
}
// } Driver Code Ends