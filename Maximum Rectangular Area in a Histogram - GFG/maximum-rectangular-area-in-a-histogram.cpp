//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    vector<long long>nextSmaller(vector<long long>ar, int k)
    {
        stack<long long>st;
        st.push(-1);
        vector<long long>ans(k);
        for(int i=k-1;i>=0;i--)
        {
            int curr = ar[i];
            while(st.top()!=-1 && ar[st.top()]>=curr)
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    vector<long long>prevSmaller(vector<long long>arr, int n)
    {
        stack<long long>st;
        st.push(-1);
        vector<long long>ans(n);
        for(int i=0;i<n;i++)
        {
            int curr = arr[i];
            while(st.top()!=-1 && arr[st.top()]>=curr)
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
    vector<long long> arrVector(arr, arr + n); // Convert array to vector
    vector<long long> next = nextSmaller(arrVector, n); // Call nextSmaller with vector
    vector<long long> prev = prevSmaller(arrVector, n); // Call prevSmaller with vector
    long long maxArea = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        long long l = arrVector[i];
        if(next[i] == -1)
        {
            next[i] = n;
        }
        long long b = next[i] - prev[i] - 1;
        long long area = l * b;
        maxArea = max(area, maxArea);
    }
    return maxArea;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends