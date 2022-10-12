class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        unordered_map<char,string> mp;
        int glob_index = 0;
        int word_count = 1;
        string current_word = "";
        for(int i=0; i < s.length(); ++i){
            if(s[i] == ' '){
                word_count++;
            }
        }
        for(int i = 0; i < pattern.length(); ++ i){
            while(s[glob_index] != ' ' && (glob_index < s.length())){
                current_word += s[glob_index];
                glob_index++;
            }
            glob_index++;
            if(mp.count(pattern[i])) {
                if(mp[pattern[i]] != current_word) {
                    return false;
                }
            }
            else{
                for(int i=0; i < words.size(); ++i){
                    if(words[i] == current_word)
                    return false;
                }
                words.push_back(current_word);
                mp.insert(pair<char,string>(pattern[i], current_word));
            }
            current_word = "";
        }
        if(word_count != pattern.length()){
            return false;
        }
        return true;
    }
};