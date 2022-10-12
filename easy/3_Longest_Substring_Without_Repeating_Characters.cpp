class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sl;
        int i = 0;
        int j = 0;
        int n = s.size();
        int ans = 0;
        while(j<n) {
            if(sl.find(s[j]) == sl.end()) {
                sl.insert(s[j++]);
                ans = max(ans, j-i);
            }
            else{
                sl.erase(s[i++]);
            }
        }
        return ans;
    }
};