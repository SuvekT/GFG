class Solution {
public:
    int countSegments(string s) {
           int n = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] != ' ')
                n++;
            while(i < s.size() && s[i] != ' ')
                i++;
        }
        return n;
    }
};