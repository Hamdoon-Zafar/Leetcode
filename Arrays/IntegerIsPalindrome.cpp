//Given an integer x, return true if x is a , and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x <= 9) {
            return false;
        }
        int n, digit, rev = 0;
        n = x;
        while (x != 0) {
            digit = x % 10;
            rev = (rev * 10) + digit;
            x = x / 10;
        }
        if(rev== n){
            return true;
        }
        return false;
    }
};

// first an edge case is dealt with then there are a few integers declared which are used for different purposes. One is just copying the number 
// entered by the user then loop starts and then first mod operator to take out the last digit of the entered number then multiply it by 0 to 
// have no change and then add the seperated number. Continue it until there is nothing left to apply mod operator on. Then a simple check to get work done.
