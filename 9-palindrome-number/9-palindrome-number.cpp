class Solution {
public:
    bool isPalindrome(int x) {
        long number = x;
        long reversed = 0, digit;
    if (x>=0){
        do{
            digit = x % 10;
            reversed = (reversed*10) + digit;
            x = x/10;
        }
        while(x != 0 );
        }
    else
        return false;
    

    if (reversed == number){
            return true;
        }
    else
            return false;
    }
};