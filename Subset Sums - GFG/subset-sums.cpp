//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int>ans;
    void subset(vector<int> arr,int ind,int n,int sum)
    {
        if(ind==n)
        {
            ans.push_back(sum);
            return;
        }
        subset(arr,ind+1,n,sum+arr[ind]);
        subset(arr,ind+1,n,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int sum=0;
        sort(arr.begin(),arr.end());
        subset(arr,0,N,sum);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends