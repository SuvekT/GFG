// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
       
        sort(arr,arr+n);
        int max_=arr[n-1];
        int min_=arr[0];
        int r=0;
        r=arr[n-1]-arr[0];
        
        for(int i=1;i<n;i++){
            if(arr[i]>=k){
                max_=max(arr[i-1]+k,arr[n-1]-k);
                min_=min(arr[i]-k,arr[0]+k);
                r=min(r,max_-min_);
            }
            else
            continue;
        }
        return r;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends