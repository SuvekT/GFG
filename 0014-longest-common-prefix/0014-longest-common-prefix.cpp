class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           string strg;
			char prefix;
			bool checked = true;
			for(int i = 0; i < strs[0].length();i++) {
				prefix = strs[0][i];
				for(int j = 0; j < strs.size();j++) {
					if(strs[j][i] != prefix) {
						checked = false;
					}    
				}
				if(checked == true) {
					strg += prefix;
				}
			}
			if(strs[0] == "") {
				strg = "";
				return strg;
			}
			else {
				return strg;
			}
        
    }
};