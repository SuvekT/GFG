class Solution {
public:
    string addBinary(string a, string b) {
                int carry = 0;
        int n1 = a.size()-1, n2 = b.size()-1; 
        
        string ans = ""; 
        while(n1>=0 || n2>=0){ 
            int sum = carry; 
            
            if (n1>=0) sum+= a[n1--]-'0'; 
            if (n2>=0) sum+= b[n2--]-'0';
            
            carry = (sum>1) ? 1 : 0; 
            ans += (sum%2)+'0'; 
            
        }
        
        if (carry) ans += carry+'0'; 
        
        reverse(ans.begin(), ans.end()); 
        return ans;

    }
};