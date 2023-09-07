//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>res;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int target_2=k-arr[i]-arr[j];
                int front=j+1;
                int back=n-1;
                while(front<back)
                {
                    int two_sum=arr[front]+arr[back];
                    if(two_sum<target_2)
                    {
                        front++;
                    }
                    else if(two_sum>target_2){
                        back--;
                    }
                    else{
                        vector<int>ans(4,0);
                        ans[0]=arr[i];
                        ans[1]=arr[j];
                        ans[2]=arr[front];
                        ans[3]=arr[back];
                        
                        res.push_back(ans);
                        
                        
                        while(front<back && arr[front]==ans[2])++front;
                    
                    while(front<back && arr[back]==ans[3])--back;
                    }
                }
                while(j+1<n && arr[j+1]==arr[j])++j;
            }
               while(i+1<n && arr[i+1]==arr[i])++i;
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends