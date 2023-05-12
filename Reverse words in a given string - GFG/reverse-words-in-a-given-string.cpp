//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
          stack<string>st;
      string res="";
      for(int i=0;i<S.length();i++)
      {
          if(S[i]!='.')
          {
              res+=S[i];
          }
          else
          {
              if(res.length()>0)
              st.push(res);
              res="";
          }
      }
       if(res.length()>0)
      st.push(res);
      res="";
      while(!st.empty())
      {   
        
          res+=st.top()+".";
            st.pop();
      }
      res=res.substr(0,res.length()-1);
       return res;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends