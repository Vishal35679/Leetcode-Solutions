18. 4Sum

CODE:
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<n; i++)
        {
            long one = nums[i];
            for(int j=i+1; j<n; j++)
            {
                long two = nums[j];
                int s = j+1;
                int e = n-1;
                while(s<e)
                {
                    long three = nums[s];
                    long four = nums[e];
                    // int sum = nums[i]+nums[j]+nums[s]+nums[e];
                    if(one + two + three + four == target)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[s]);
                        temp.push_back(nums[e]);
                        sort(temp.begin(), temp.end());
                        ans.push_back(temp);                    
                        s++;
                        e--;
                    }
                    else if( one + two + three + four < target) s++;
                    else e--;

                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
