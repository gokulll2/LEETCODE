//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    set<string>ans;
	    void solve(string S,string ds,vector<int>&freq,int n)
	    {
	        if(ds.size()==n)
	        {
	            ans.insert(ds);
	            return;
	        }
	        for(int i=0;i<n;i++)
	        {
	            if(!freq[i])
	            {
	                ds.push_back(S[i]);
	                freq[i]=1;
	                solve(S,ds,freq,n);
	                freq[i]=0;
	                ds.pop_back();
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int n=S.length();
		    vector<int>freq(n,0);
		    string ds;
		    solve(S,ds,freq,n);
		    vector<string>res;
		  for(auto it: ans)
		  {
		      res.push_back(it);
		  }
		  return res;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends