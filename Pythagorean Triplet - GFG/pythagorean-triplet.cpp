//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	   // if(n<3)
	   // {
	   //     return false;
	   // }
	   // sort(arr,arr+n);
	   // for(int i=0;i<n;i++)
	   // {
	   //     arr[i]=arr[i]*arr[i];
	   // }
	   // for(int i=n-1;i>=0;i--)
	   // {
	   //     int j=0;
	   //     int r=i-1;
	   //     while(j<r)
	   //     {
	   //         if(arr[j]+arr[r]==arr[i])
	   //         {
	   //             return 1;
	   //         }
	   //         if(arr[j]+arr[r]<arr[i])
	   //         {
	   //             j++;
	   //         }
	   //         else{
	   //             r--;
	   //         }
	   //     }
	   // }
	   // return 0;
	   
	   
	   
	   if(n<3)
	   {
	       return false;
	   }
	   for(int i=0;i<n;i++)
	   {
	       arr[i]= arr[i]*arr[i];
	   }
	   sort(arr,arr+n);
	   for(int i=n-1;i>=0;i--)
	   {
	       int j=0;
	       int r=i-1;
	       while(j<r)
	       {
	       if(arr[r]+arr[j]==arr[i])
	       {
	           return 1;
	       }
	       else if(arr[r]+arr[j]>arr[i])
	       {
	           r--;
	       }
	       else{
	           j++;
	       }
	       
	   }
	       
	   }
	   return false;
	   
	   
	   
	   // for(int i=n-1;i>=0;i--)
	   // {
	   //     int j=0;
	   //     int r=i-1;
	   //     while(j<r)
	   //     {
	   //         if(pow(arr[j],2)+pow(arr[r],2)==pow(arr[i],2));
	   //         {
	   //             return 1;
	   //         }
	   //          if(pow(arr[j],2)+pow(arr[r],2) > pow(arr[i],2))
	   //         {
	   //            r--;
	   //         }
	   //         else{
	   //             j++;
	   //         }
	   //     }
	   // }
	   // return 0;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends