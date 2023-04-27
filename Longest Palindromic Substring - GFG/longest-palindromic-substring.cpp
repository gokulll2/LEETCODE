//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        // code here 
        int n=S.length();
        int mx=INT_MIN;
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int diff=0;diff<n;diff++)
        {
            for(int i=0,j=diff;j<n;j++,i++)
            {
                if(diff==0)
                {
                    dp[i][j]=1;
                }
                else if(diff==1)
                {
                    if(S[i]==S[j])
                    {
                        dp[i][j]=2;
                    }
                }
                else{
                    if(S[i]==S[j] && dp[i+1][j-1]>0)
                    {
                        dp[i][j]=2+dp[i+1][j-1];
                    }
                }
                mx=max(mx,dp[i][j]);
            }
        }
        string ans="";
        for(int i=0;i<dp.size();i++)
        {
            for(int j=0;j<dp[0].size();j++)
            {
                if(dp[i][j]==mx)
                {
                    return S.substr(i,j-i+1);
                }
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends