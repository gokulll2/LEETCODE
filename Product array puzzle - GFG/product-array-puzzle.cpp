//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
        vector<long long int>pp;
        
        long long int product=1;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
        }
        // cout<<count;
        if(count>1)
        {
            for(int i=0;i<n;i++)
            {
                pp.push_back(0);
            }
        }
        else if(count==1)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]==0)
                {
                    continue;
                }
                else
                {
                    product=arr[i]*product;
                }
            }
            // cout<<product<<"\t";
            for (int i=0;i<n;i++)
            {
                if(arr[i]==0)
                {
                    pp.push_back(product);
                }
                else
                    {
                        pp.push_back(0);
                    }
            }
        }
        else {
            for(int i=0;i<n;i++)
            {
               product=arr[i]*product;
            }
            for(int i=0;i<n;i++)
            {
                // if(arr[i]==0)
                // {
                //     pp.push_back(0);
                // }
                pp.push_back(product/arr[i]);
                    
            }
        }
        return  pp;
        
        
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends