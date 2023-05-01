1491. Average Salary Excluding the Minimum and Maximum Salary

CODE:
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int n=salary.size();
        double sal=0;
        int j=0;
        for(int i=1; i<n-1; i++)
        {
            j++;
            sal = sal + salary[i];
        }
        return sal/j;
    }
};
