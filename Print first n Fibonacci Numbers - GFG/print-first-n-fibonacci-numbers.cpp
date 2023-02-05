//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>v;
        if(n==0 || n==1)
        {
            v.push_back(n);
            return v;
        }
        long long int a=1;
        long long int b=1;
        v.push_back(a);
        v.push_back(b);
        long long int sum=0;
        for(int i=0;i<n-2;i++)
        {
            sum=a+b;
            v.push_back(sum);
            a=b;
            b=sum;
        }
        return v;
        
    
        
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends