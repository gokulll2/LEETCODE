//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
  
        string reverseWithSpacesIntact (string s)
        {
            //code here.
            // int n=s.length();
            // // int i=0;
            // // int j=0;
            // // while(j<n)
            // // {
            // //     if(s[j]==' ')
            // //     {
            // //         reverse(s.begin()+i,s.end());
            // //     }
            // // }
            // int index=-1;
            // for(int i=0;i<n;i++)
            // {
            //     if(s[i]==' ')
            //     {
            //         index=i;
            //         break;
            //     }
            // }
            //  reverse(s.begin(),s.end());
            // if(index==-1)
            // {
            //      return s;
            // }
            // // reverse(s.begin(),s.end());
            // string str="";
            
            // for(int i=0;i<n;i++)
            // {
            //     if(s[i]==' ')
            //     {
            //         continue;
            //     }
            //     if(i==index)
            //     {
            //         str+=" ";
            //     }
            //     str+=s[i];
            // }
            // return str;
            int n=s.length();
            int start=0;
            int end=n-1;
            while(start<end)
            {
                if(s[start]==' ')
                {
                    start++;
                }
                if(s[end]==' ')
                {
                    end--;
                }
                if(s[start]!=' ' && s[end]!=' ')
                {
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
            }
            return s;
            
        }
      

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends