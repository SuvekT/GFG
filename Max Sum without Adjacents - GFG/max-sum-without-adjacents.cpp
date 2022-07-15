// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int f(int i,int a[],vector<int> &v){
	    if(i==0)
	    return a[i];
	    
	    if(i<0)
	    return 0;
	    if(v[i]!=-1){
	        return v[i];
	    }
	    int pick=a[i]+f(i-2,a,v);
	    int notpick=f(i-1,a,v);
	    return v[i]=max(pick,notpick);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> v(n,-1);
	    return f(n-1,arr,v);
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
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends