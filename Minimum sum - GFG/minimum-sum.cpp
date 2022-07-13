// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
          sort(arr,arr+n,greater<int>()); 
       int carry=0;
       string ans;
       for(int i=0;i<n;i+=2)
       {
           int s=arr[i]+carry;
           if(i+1<n)
             s+=arr[i+1];
           carry=s/10;
           ans+=to_string(s%10);
       }
       if(carry)
       ans+="1";
       while(!ans.empty() and ans.back()=='0')
          ans.pop_back();
       
       reverse(ans.begin(),ans.end());
       return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends