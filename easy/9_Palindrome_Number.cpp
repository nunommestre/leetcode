class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int remainder = 0;
        int long required = 0;
        while(temp != 0){
            remainder = temp % 10;
            required = required * 10 + remainder;
            temp = temp/10;
        }
        if(required == x && x >= 0){
            return true;
        }
        else {
            return false;
        }
    }
};