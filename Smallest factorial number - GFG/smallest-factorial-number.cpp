//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int findzero(int x)
        {
            int count=0;
            while(x!=0)
            {
                x=x/5;
                count=count+x;
            }
            return count;
        }
        int findNum(int n)
        {
        //complete the function here
        int low=0;
        int high=5*n;
        int mid=low+(high-low)/2;
        int ans=low;
        while(low<=high)
        {
            int zeroes=findzero(mid);
            if(zeroes>=n)
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends