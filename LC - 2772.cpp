2772. Apply Operations to Make All Array Elements Equal to Zero

CODE:
class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int prefixsumk = 0;
        int n = nums.size();
        vector<int> contribution(n,0);
        for(int i=0;i<n; i++){
            if(prefixsumk > nums[i])
                return false;
            contribution[i] = nums[i] - prefixsumk;
            prefixsumk = prefixsumk + contribution[i];
            if(i>=k-1)
                prefixsumk-= contribution[i-k+1];
        }
        return prefixsumk == 0;
    }
};
