// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int subset_sum(int *a,int sum,int n){
         int m[n+1][sum+1];
         for(int i=0;i<n+1;i++){ // intialization is done
             for(int j=0;j<sum+1;j++){
                 if( i==0)
                 m[i][j]=0;
                 if(j==0)
                 m[i][j]=1;
             }
         }
       for(int i=1;i<n+1;i++){
           for(int j=1;j<sum+1;j++){
               
               if((a[i-1])<=j){
                   m[i][j]=((m[i-1][j-a[i-1]]) || m[i-1][j]);
               }
               else{
                   m[i][j]=m[i-1][j];
               }
           }
       }
       return m[n][sum];
     }
     
    int equalPartition(int N, int arr[])
    {
        // code h
        int arr_sum=0;
        for(int i=0;i<N;i++){
            arr_sum+=arr[i];
        }
        if(arr_sum%2!=0)
        return 0;
        else{
            return subset_sum(arr,arr_sum/2,N);
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends