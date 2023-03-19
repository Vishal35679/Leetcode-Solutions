31. Next Permutation

CODE:
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int start = nums.size() - 1;
        while(start >= 1 && nums[start] <= nums[start-1]) {
            start--;
        }
        if(start > 0) {
            int temp = nums.size()-1;
            while(nums[temp] <= nums[start-1]) temp--;
            swap(nums[start-1], nums[temp]);
        }
        reverse(nums.begin()+start, nums.end());
    }
};
