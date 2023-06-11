136. Single Number

CODE:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int i=0, j=1;
        while(i<n && j<n-1){
            if(nums[i]==nums[j]){
                i=i+2;
                j=j+2;
            }
            else{
                break;
            }
        }
        return nums[i];
    }
};
