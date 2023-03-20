53. Maximum Subarray

CODE:
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans = nums[0];

        for(int i=0; i<nums.size(); i++)
        {
            sum = sum + nums[i];
            ans = max(ans, sum);
            if(sum<0) sum =0;
        }
        return ans;
    }
};
