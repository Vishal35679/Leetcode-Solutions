152. Maximum Product Subarray

CODE:
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int maxProd = ans;
        int minProd = ans;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]<0) {
                swap(minProd, maxProd);
            }
            maxProd = max(nums[i], maxProd*nums[i]);
            minProd = min(nums[i], minProd*nums[i]);
            ans = max(ans, maxProd);
        }
        return ans;
    }
};
