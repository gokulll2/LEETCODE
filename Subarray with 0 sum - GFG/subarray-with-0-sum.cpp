//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int curr=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            curr=curr+arr[i];
            if(curr==0)
            {
                return true;
            }
            ans.push_back(curr);
        }
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]==ans[i-1])
            {
                return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends