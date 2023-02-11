//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string S, int K) {
        // code here
        int longestcount=0;
        unordered_map<char,int>v;
        int j=0;
        int ans=0;
        for(int i=0;i<S.length();i++)
        {
            v[S[i]]++;
            longestcount=max(longestcount,v[S[i]]);
            if((i-j+1)-longestcount > K)
            {
                v[S[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends