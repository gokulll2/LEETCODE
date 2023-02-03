//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   int mod=1e9+7;
  long long int f(long long int n,vector<long long int>&dp)
  {
      if(n<2)
      {
          return n;
      }
      if(dp[n]!=-1)
      {
          return dp[n]%mod;
      }
      else{
      return dp[n]=f(n-1,dp)+f(n-2,dp)%mod;
      }
  }
    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int> dp(n+1,-1);
        
        return f(n,dp)%mod;
        // return dp[n];
        // int dp[40];
        // dp[0]=0;
        // dp[1]=1;
        // dp[2]=1;
        // for(int i=3;i<=n;i++)
        // {
        //     dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        // }
        // return dp[n];
        // if(n==0)
        // {
        //     return 0;
        // }
        // if(n==1)
        // {
        //     return 1;
        // }
        // long long num1=0;
        // long long num2=1;
        // long long sum;
        // for(int i=2;i<=n;i++)
        // {
        //     sum=(num1+num2)%1000000007;
        //     num1=num2;
        //     num2=sum;
        // }
        // return sum%1000000007;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends