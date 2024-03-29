231. Power of Two

CODE:
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n==1) return true;
        while(n%2==0) {
            n=n/2;
        }
        return (n==1);
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0; i<=30; i++)
        {
            int ans=pow(2,i);
            if(ans==n)
                return true;
        }
        return false;
    }
};
