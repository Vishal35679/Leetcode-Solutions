1009. Complement of Base 10 Integer
    
CODE:
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        vector<int> temp;
        int res=0;
        while(n!=0) {
            temp.push_back(n%2);
            n/=2;
        }
        for(int i=0; i<temp.size(); i++) {
            if(temp[i]==0) temp[i]=1;
            else temp[i]=0;
        }
        for(int i=temp.size()-1; i>-1; i--) {
            res = res*2 + temp[i];
        }
        return res;
    }
};

//bit manipulation
class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask=0; 
        //base case
        if(n==0)
        {
            return 1;
        }
        while(m!=0)
        {
            mask=(mask<<1)|1;
            m = m >>1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};
