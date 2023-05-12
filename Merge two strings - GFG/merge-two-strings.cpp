//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    
     string ans;
        int i=0;
        int j=0;
        int k=0;
        while(i<S1.length() && j<S2.length())
        {
             if(k%2==0)
             {
                ans.push_back(S1[i++]);
             }else{
                ans.push_back(S2[j++]);
             }
             k++;
        }
        while(i<S1.length())
        {
            ans.push_back(S1[i++]);
        }
        while(j<S2.length())
        {
            ans.push_back(S2[j++]);
        }
        return ans;
}