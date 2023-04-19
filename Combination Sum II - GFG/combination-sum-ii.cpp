//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    set<vector<int>>ans;
    vector<int>sol;
    void solve(vector<int>arr,int ind,int k,vector<int>sol,int n)
    {
        if(ind>=n)
        {
            if(k==0)
            {
                ans.insert(sol);
            }
            return;
        }
        if(arr[ind]<=k)
        {
            sol.push_back(arr[ind]);
            solve(arr,ind+1,k-arr[ind],sol,n);
            sol.pop_back();
        }
        while(ind<n && arr[ind]==arr[ind+1]) ind++;
        
        solve(arr,ind+1,k,sol,n);
    }
    
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        sort(arr.begin(),arr.end());
        solve(arr,0,k,sol,n);
        vector<vector<int>>res;
        for(auto it:ans)
        {
            res.push_back(it);
        }
        
        return res;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends