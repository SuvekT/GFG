// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long water=0;
        int lmax=arr[0];
        int rmax=arr[n-1];
        int left=0,right=n-1;
        while(left<right){
            if(lmax<rmax){
                left++;
                lmax=max(lmax,arr[left]);
                water+=lmax-arr[left];
            }
            else{
                right--;
                rmax=max(rmax,arr[right]);
                water+=rmax-arr[right];
            }
        }
        return water;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends