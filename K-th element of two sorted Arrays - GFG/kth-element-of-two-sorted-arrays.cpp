// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {  /*
        vector <int> v;
        for(int i=0;i<n;i++){
            v.push_back(arr1[i]);
        }
        for(int j=0;j<m;j++){
            v.push_back(arr2[j]);
        }
        sort(v.begin(),v.end());
        return v[k-1]; */
        
        
        int arr[n+m];
        int i=0,j=0,p=0;
        while(i<n && j<m){
             if(arr1[i]<arr2[j]){
                 arr[p]=arr1[i];
                 i++;
             }
             else{
                 arr[p]=arr2[j];
                 j++;
             }
             p++;
        }
        if(i==n){
            while(p<m+n){
            arr[p]=arr2[j];
            p++;
            j++;
            }
        }
        if(j==m){
            while(p<m+n){
            arr[p]=arr1[i];
            p++;
            i++;
            }
        }
        return arr[k-1];
        
        
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends