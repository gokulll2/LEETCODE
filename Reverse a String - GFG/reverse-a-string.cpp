//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  int s=0;
  int r=str.length()-1;
  while(s<r)
  {
      swap(str[s],str[r]);
      s++;
      r--;
  }
  return str;
}

