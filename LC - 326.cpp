326. Power of Three

CODE:
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n==0 || n==2) return false;
        while(n%3==0) {
            n=n/3;
        }
        return (n==1);
    }
};
