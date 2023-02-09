17. Letter Combinations of a Phone Number

CODE:
class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping[])
    {
        if(index >=digit.length())
        {
            ans.push_back(output);
            return ;
        }

        int num=digit[index] - '0';
        string val = mapping[num];

        for(int i=0; i<val.length(); i++)
        {
            output.push_back(val[i]);
            solve(digit, output, index+1, ans, mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0) return ans;
        string output;
        int index=0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};
