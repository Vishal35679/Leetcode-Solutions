1470. Shuffle the Array

CODE:
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int left = 0;
        int right = n;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
            {
                ans.push_back(nums[left]);
                left++;
            }
            else{
                ans.push_back(nums[right]);
                right++;
            }
        }
        return ans;
    }
};
