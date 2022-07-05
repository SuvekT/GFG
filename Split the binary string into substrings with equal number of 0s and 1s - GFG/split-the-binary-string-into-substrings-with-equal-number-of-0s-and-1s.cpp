// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int zeros=0;
        int ones=0;
        int count=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='0')
            zeros++;
            else
            ones++;
            if(ones==zeros)
            count++;
        }
        if(zeros!=ones)
        return -1;
        return count;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends