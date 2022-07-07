// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    long long int product(vector<long long int>& nums,int left,int right,int n){
        
       long long int prod=1;
       long long int prod1=1;
       long long int prod2=1;
       if(left==-1){
           for(int i=1;i<n;i++){
               prod*=nums[i];
           }
           return prod;
       }
       if(right==n){
            for(int i=0;i<n-1;i++){
               prod*=nums[i];
           }
           return prod;
       }
       
       for(int i=0;i<=left;i++){
           prod1*=nums[i];
       }
       for(int i=right;i<n;i++){
           prod2*=nums[i];
       }
       return prod1*prod2;
        
    }
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        vector<long long int> v;
        
        for(int i=0;i<n;i++){
            v.push_back(product(nums,i-1,i+1,n));
        }
        return v;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends