//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string S)
{
    // your code here
   int n = S.length();
   string str="hello";
   int j=0;
   
   for(int i=0;i<n;i++)
   {
       if(S[i]==str[j])
       {
           j++;
       }
   }
   if(j==str.length())
   {
       return 1;
   }
   else{
       return 0;
   }
   
}