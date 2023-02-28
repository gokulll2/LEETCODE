//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int inft=0;
        for(int i=N-1;i>0;i--)
        {
            if(arr[i]>arr[i-1])
            {
                inft=i;
                break;
            }
        }
        if(inft==0)
        {
            sort(arr.begin(),arr.end());
        }
        else{
            int min=INT_MAX;
            int toswap=arr[inft-1];
            for(int j=inft;j<=N-1;j++)
            {
                if(arr[j]-toswap>0 && arr[j]-toswap<min)
                {
                    int temp=arr[j];
                    arr[j]=arr[inft-1];
                    arr[inft-1]=temp;
                }
            }
            sort(arr.begin()+inft,arr.end());
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends