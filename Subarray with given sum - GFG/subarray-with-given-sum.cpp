//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        // vector<int>ans,notfound;
        // long long sum=0;
        // int start=0;
        // bool flag=false;
        // for(int i=0;i<n;i++)
        // {
        //     sum=sum+arr[i];
        //     while(sum>s)
        //     {
        //         sum=sum-arr[start];
        //         start++;
        //     }
        //  if(sum==s)
        //     {
        //         ans.push_back(start+1);
        //         ans.push_back(i+1);
        //         flag=true;
        //         break;
        //     }
            
        // }
        // notfound.push_back(-1);
        // if(s==0)
        // {
        //     return notfound;
        // }
        // if(flag)
        // {
        //     return ans;
        // }
        // else{
        //     return notfound;
        // }
        bool flag=false;
      vector<int>ans;
      long long sum=0;
      int start=0;
      for(int i=0;i<n;i++)
      {
          sum+=arr[i];
          while(sum>s)
          {
              sum=sum-arr[start];
              start++;
          }
          if(sum==s)
          {
              ans.push_back(start+1);
              ans.push_back(i+1);
              flag=true;
              break;
          }
          
      }
      vector<int>not_found;
      not_found.push_back(-1);
      if(s==0)
      {
          return not_found;
      }
      if(flag)
      {
          return ans;
      }
      else{
          return not_found;
      }
        
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends