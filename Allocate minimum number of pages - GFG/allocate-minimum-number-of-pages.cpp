//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool ispossible(int A[],int N,int M,int mid)
    {
        int studentcount=1;
        int pagesum=0;
        for(int i=0;i<N;i++)
        {
            if(pagesum+A[i]<=mid)
            {
                pagesum+=A[i];
            }
            else{
                studentcount++;
                if(studentcount>M || A[i]>mid)
                {
                    return false;
                }
                pagesum=A[i];
            }
            // if(studentcount>M)
            // {
            //     return false;
            // }
        }
        return true;
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        //THIS CONDITION
        if(M>N)
        {
            return -1;
        }
        int s=A[0];
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        int e=sum;
        int mid=s+(e-s)/2;
        int temp=-1;
        while(s<=e)
        {
            if(ispossible(A,N,M,mid))
            {
                temp=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return temp;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends