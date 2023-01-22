//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
    {
        // code here
        sort(A,A+N);
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<N;i++)
        {
            int first=A[i];
            int start=i+1;
            int end=N-1;
            while(start<end)
            {
                if(first+A[start]+A[end]==X)
                {
                    return X;
                }
                if(abs(first+A[start]+A[end]-X)<diff)
                {
                    diff=abs(first+A[start]+A[end]-X);
                    ans=first+A[start]+A[end];
                }
                if(first+A[start]+A[end]>X)
                {
                    end--;
                }
                else{
                    start++;
                }
            }
            
        }
        return ans;
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
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends