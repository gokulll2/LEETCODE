//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
   bool check=false;
   int maxi=arr[0];
   for(int i=1;i<n-1;i++)
   {
       if(arr[i]>=maxi && !check)
       {
           maxi=arr[i];
           check=true;
       }
       if(arr[i]>arr[i+1])
       {
           check=false;
       }
   }
   if(check==false)
   {
       return -1;
   }
   return maxi;
}