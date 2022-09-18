class Solution {
public:
    int titleToNumber(string co) {
          int result = 0;
        for(char c : co)
        {
            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};