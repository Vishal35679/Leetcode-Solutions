128. Longest Consecutive Sequence

CODE:
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int lastNum = INT_MAX;
        int ans = 0, cnt = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] - 1 == lastNum) {
                cnt += 1;
                lastNum = nums[i];
            }
            else if(nums[i] != lastNum) {
                cnt = 1;
                lastNum = nums[i];
            }
            if(cnt > ans) ans = cnt;
        }
        return ans;
    }
};
