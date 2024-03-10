class Solution {
public:
    bool isPalindrome(int x) {
        long long reversed = 0;
        long long temp = x;
        if (x < 0){
            return false;
        }
        
        while (temp != 0){
            int digit = temp % 10;
            reversed = reversed*10 + digit;
            temp = temp/10;
        }
        
        return (x == reversed);
}
};
