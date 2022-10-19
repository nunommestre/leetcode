class Solution {
public:
    int lengthOfLastWord(string s) {
        int current_word = 0;
        for(int i = s.length() - 1; i >= 0; --i) {
            if(s[i] == ' ' && current_word > 0){
                return current_word;
            }
            else if(s[i] != ' ') {
                current_word++;
            }
        }
        return current_word;
    }
};