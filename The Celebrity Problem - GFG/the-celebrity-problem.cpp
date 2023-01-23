//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    bool knows(vector<vector<int>>&M,int a,int b,int n)
    {
        if(M[a][b]==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        // STEP 1: push all elements in stack
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        //STEP 2: get 2 elements ans compare them
        while(s.size()>1)
        {
            int a = s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(knows(M,a,b,n))
            {
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int candidate=s.top();
        
        //STEP 3 : single element in stack is potential celeb
        //SO verify it
        bool rowCheck=false;
        int zerocount=0;
        for(int i=0;i<n;i++)
        {
            if(M[candidate][i]==0)
            {
                zerocount++;
            }
        }
        
        if(zerocount==n)
        {
            rowCheck=true;
        }
        
        bool colCheck=false;
        int onecount=0;
        
        for(int i=0;i<n;i++)
        {
            if(M[i][candidate])
            {
                onecount++;
            }
        }
        
        if(onecount==n-1)
        {
            colCheck=true;
        }
        
        if(rowCheck && colCheck)
        {
            return candidate;
        }
        else{
            return -1;
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
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends