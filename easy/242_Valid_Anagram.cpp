class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0; i < s.length(); ++i) {
            if(mp.find(s[i]) != mp.end()) {
                mp[s[i]]++;
            }
            else{
                mp[s[i]] = 1;
            }
        }
        for(int j=0; j < t.length(); ++j) {
            if(mp.find(t[j]) != mp.end() && mp[t[j]] > 0) {
                mp[t[j]]--;
            }
            else {
                return false;
            }
        }
        return s.length() == t.length();
    }
};