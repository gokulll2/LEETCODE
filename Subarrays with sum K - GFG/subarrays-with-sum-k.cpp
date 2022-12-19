//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        map<int,int>m;
        m.insert({0,1});
        int count=0;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum=sum+Arr[i];
            auto it=m.find(sum-k);
            if(it!=m.end())
            {
                count=count+it->second;
            }
            it=m.find(sum);
            if(it!=m.end())
            {
                it->second++;
            }
            else{
                m.insert({sum,1});
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends