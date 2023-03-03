//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        // Code here
        int t=text.size();
        int p=pat.size();
        int j=0;
        for(int i=0;i<t-p+1;i++)
        {
            int l=i;
            while(j<p && text[l]==pat[j])
            {
                l++;
                j++;
            }
            if(j==p)
            {
                return i;
            }
            j=0;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends