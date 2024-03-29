69. Sqrt(x)

CODE:
class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
        return x;
        long i=1;
        long sqr = i*i;
        while(x>=sqr)
        {
            i++;
            sqr = i*i;
        }
        return (int)(i-1);
    }
};

//binary search
CODE:
class Solution {
public:
//O(log n) Binary Search
    int bs(int n)
    {
        int s=0;
        int e=n;
        long long int mid=s + (e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            long long int sq = mid*mid;
            if(sq == n)
            {
                return mid;
            }
            else if(sq < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid=s + (e-s)/2;
        }
        return ans;
    }

    int mySqrt(int x) {
        return bs(x);
    }
};
