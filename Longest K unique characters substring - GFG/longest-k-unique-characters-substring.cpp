//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    if(k>s.length())
    {
        return -1;
    }
    unordered_map<char,int>mp;
    int i=0;
    int j=0;
    int maxi=0;
    bool flag=false;
    while(j<s.length())
    {
        mp[s[j]]++;
        if(mp.size()<k)
        {
            j++;
        }
        if(mp.size()==k)
        {
            maxi=max(maxi,j-i+1);
            flag=true;
            j++;
        }
        else if(mp.size()>k)
        {
            while(mp.size()>k)
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
   if(flag)
   {
       return maxi;
   }
   else{
       return -1;
   }
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends