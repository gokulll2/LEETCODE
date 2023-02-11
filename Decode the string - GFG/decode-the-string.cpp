//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char>st;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            st.push(s[i]);
            if(s[i]==']')
            {
                string temp="";
                st.pop();
                while(!st.empty() && st.top()!='[')
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                if(!st.empty())
                {
                    st.pop();
                }
                string d="";
                while(!st.empty() && isdigit(st.top()))
                {
                    d=st.top()+d;
                    st.pop();
                }
                int num=stoi(d);
                string result="";
                while(num--)
                {
                    result=result+temp;
                }
                for(auto ch : result)
                {
                    st.push(ch);
                }
            }
        }
        string temp="";
        while(!st.empty())
        {
            temp=st.top()+temp;
            st.pop();
        }
        ans+=temp;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends