//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    // code here
    string str="";
    int n= s.length();
    for(int i=0;i<n;i++){
        if(isdigit(s[i]))
        {
            str+=s[i];
            
             if(isdigit(s[i+1])==false)
        {
            str+=" ";
        }
        }
    }
    if(str=="")
    {
        return {"No Integers"};
    }
    else{
        return {str};
    }
}