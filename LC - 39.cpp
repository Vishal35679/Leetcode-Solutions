39. Combination Sum

CODE:
class Solution {
public:
    void findCombination(int index, int target, vector<vector<int>> &ans, vector<int> &candidate, vector<int> &ds) {
        if(index==candidate.size()) {
            if(target==0) {
                ans.push_back(ds);
            }
            return ;
        }

        if(candidate[index] <= target) {
            ds.push_back(candidate[index]);
            findCombination(index, target - candidate[index], ans, candidate, ds);
            ds.pop_back();
        }
        findCombination(index+1, target, ans, candidate, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, ans, candidates, ds);
        return ans;
    }
};
