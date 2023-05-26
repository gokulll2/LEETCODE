//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool solve(int ind,int sum,int arr[],vector<vector<int>>&dp)
    {
        if(sum==0)
        {
            return 1;
        }
        if(ind==0)
        {
            return arr[0]==sum;
        }
        if(dp[ind][sum]!=-1)
        {
            return dp[ind][sum];
        }
        bool notTake=solve(ind-1,sum,arr,dp);
        bool take = false;
        if(arr[ind]<=sum)
        {
             take=solve(ind-1,sum-arr[ind],arr,dp);
        }
        return dp[ind][sum]=(take | notTake);
    }
    
    int equalPartition(int N, int arr[])
    {
        // code here
        int totalsum=0;
        for(int i=0;i<N;i++)
        {
            totalsum+=arr[i];
        }
        int sum=totalsum/2;
        if(totalsum%2!=0)
        {
            return 0;
        }
        if(N==1)
        {
            return 0;
        }
        vector<vector<int>>dp(N,vector<int>(sum+1,-1));
        return solve(N-1,sum,arr,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends