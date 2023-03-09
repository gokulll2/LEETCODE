//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool caneatinTime(vector<int>&piles,int k,int h)
    {
        int hours=0;
        for(int pile:piles)
        {
            int div=pile/k;
            hours+=div;
            if(pile%k!=0)
            {
                hours++;
            }
        }
        return hours<=h;
    }
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int left=0;
        int right=1e9;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(caneatinTime(piles,mid,H))
            {
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends