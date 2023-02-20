217. Contains Duplicate

CODE:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> data;
        for(int i=0; i<nums.size(); i++){
            data[ nums[i] ] += 1;
            if( data[nums[i]] > 1 ) return true;
        } return false;
    }
};
