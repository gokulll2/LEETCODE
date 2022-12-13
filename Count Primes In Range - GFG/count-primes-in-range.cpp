//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPrimes(int L, int R) {
        // code here
        vector<bool>isprime(R+10,1);
        isprime[0]=0;
        isprime[1]=0;
        for(int i=2;i*i<=R;i++)
        {
            if(isprime[i])
            {
              for(int j=2*i;j<=R;j=j+i)
            {
                
                    isprime[j]=0;
            }
            }
        }
         int count=0;
        for(int i=L;i<=R;i++)
        {
            if(isprime[i])
            {
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}
// } Driver Code Ends