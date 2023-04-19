//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,int ind,vector<int>&sol,int n)
    {
        ans.push_back(sol);
        for(int i=ind;i<n;i++)
        {
            if(i!=ind && nums[i]==nums[i-1]) continue;
            sol.push_back(nums[i]);
            solve(nums,i+1,sol,n);
            sol.pop_back();
        }
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        int n=nums.size();
        vector<int>sol;
        sort(nums.begin(),nums.end());
        solve(nums,0,sol,n);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends