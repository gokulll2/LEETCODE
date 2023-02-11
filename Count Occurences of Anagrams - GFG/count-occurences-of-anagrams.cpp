//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int>txt1;
	    unordered_map<char,int>pat1;
	    vector<int>ans;
	    for(int i=0;i<pat.length();i++)
	    {
	        pat1[pat[i]]++;
	        txt1[txt[i]]++;
	    }
	    if(pat1==txt1)
	    {
	       // return 1;
	       ans.push_back(0);
	    }
	    int count=0;
	    int j=0;
	    for(int i=pat.size();i<txt.size();i++)
	    {
	        txt1[txt[i]]++;
	        txt1[txt[j]]--;
	        if(txt1[txt[j]]==0)
	        {
	            txt1.erase(txt[j]);
	        }
	        j++;
	        if(txt1==pat1)
	        {
	            ans.push_back(j);
	        }
	    }
	    for(int i=0;i<ans.size();i++)
	    {
	        count++;
	    }
	    return count;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends