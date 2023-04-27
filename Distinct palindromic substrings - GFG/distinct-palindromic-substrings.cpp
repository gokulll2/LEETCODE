//{ Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int palindromeSubStrs(string s) {
        int n=s.length();
        // code here
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        unordered_set<string>st;
        int count=0;
        for(int diff=0;diff<n;diff++)
        {
            for(int i=0,j=diff;j<n;i++,j++)
            {
                if(diff==0)
                {
                    dp[i][j]=true;
                }
                else if(diff==1)
                {
                    if(s[i]==s[j])
                    {
                        dp[i][j]=true;
                    }
                }
                else{
                    if(s[i]==s[j])
                    {
                        dp[i][j]=dp[i+1][j-1];
                    }
                }
                if(dp[i][j])
                {
                 st.insert(s.substr(i,j-i+1));
                 
                }
            }
        }
        return st.size();
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}

// } Driver Code Ends