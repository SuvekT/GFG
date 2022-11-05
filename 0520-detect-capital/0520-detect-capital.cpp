class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int upper=0,lower=0,fupper=0;
        if(isupper(word[0])) fupper++;
        else lower++;
        for(int i=1;i<word.size();i++){
            if(isupper(word[i])) upper++;
            else lower++;
        }
        if(fupper+upper==word.size() || lower==word.size()) return true;
        else if(fupper==1 && lower==word.size()-1) return true;
        return false;
    }
};