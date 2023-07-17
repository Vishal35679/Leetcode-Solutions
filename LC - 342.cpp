342. Power of Four

CODE:
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n==0 || n==3 || n==2 ) return false;
        while(n%4==0){
            n=n/4;
        }
        return (n==1);
    }
};
