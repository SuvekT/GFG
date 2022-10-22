//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int N) {
        // code here
        int prev1=2,prev2=1;
        int ans=0;
        if(N<3) return N;
        int i=3;
        while(i<=N){
            ans=(prev1%100000000+prev2%100000000)%100000000;
            prev2=prev1;
            prev1=ans;
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends