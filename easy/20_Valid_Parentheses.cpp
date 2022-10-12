using namespace std;
#include <stack>
#include <unordered_map>
class Solution {
public:
    bool isValid(string s) {
        stack <char> pt;
        for(int i= 0; i < s.length(); i++){
            if(s[i] == '('){
                pt.push(')');
            }
            if(s[i] == '{'){
                pt.push('}');
            }
            if(s[i] == '['){
                pt.push(']');
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if (pt.empty() || pt.top() != s[i]){
                    return false;
                }
                else{
                    pt.pop();
                }
            }
        }
        return pt.empty();
        }
};