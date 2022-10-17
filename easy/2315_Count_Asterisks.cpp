class Solution {
public:
    int countAsterisks(string s) {
        bool isValid = false;
        int count = 0;
        int ans = 0;
        for (int i = 0; i < s.length(); ++i) {
            if(s[i] == '|'){
                count++;
            }
            if(count % 2 == 0 && s[i] == '*') {
                ans++;
            }
            else if(count > 2) {
                count = 1;
            }
        }
        return ans;
    }
};