//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int missing =0;
        int repeating =0;
        vector<int>res(n,0);
        for(int i=0;i<arr.size();i++)
        {
            if(res[arr[i]-1]<0)
            {
                repeating = arr[i];
            }
            else{
                res[arr[i]-1]=-1;
            }
        }
        for(int i=0;i<n;i++)
        {
             if(res[i]!=-1)
             {
                 missing = i+1;
             }
        }
        vector<int>ans;
        ans.push_back(repeating);
        ans.push_back(missing);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends