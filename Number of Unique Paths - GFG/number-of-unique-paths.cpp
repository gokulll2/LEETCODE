//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int ram(int a,int b,vector<vector<int>>&dp)
    {
        if(a==1 || b==1)
        {
            return 1;
        }
        if(a<0 && b<0)
        {
            return 0;
        }
        if(dp[a][b]!=-1)
        {
            return dp[a][b];
        }
        int up=ram(a-1,b,dp);
        int left=ram(a,b-1,dp);
        return dp[a][b]=up+left;
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        vector<vector<int>>dp(a+1,vector<int>(b+1,-1));
        return ram(a,b,dp);
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends