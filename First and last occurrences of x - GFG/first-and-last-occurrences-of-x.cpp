//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>v;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            v.push_back(i);
            flag=true;
            break;
        }
        
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            v.push_back(i);
            flag=true;
            break;
        }
    }
    if(flag)
    {
        return v;
    }
    else{
        v.push_back(-1);
        v.push_back(-1);
    }
   
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends