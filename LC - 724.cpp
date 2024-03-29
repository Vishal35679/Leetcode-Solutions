724. Find Pivot Index

CODE:
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int index = -1;
	int leftSum = 0;
	int n = nums.size();
	int sum = 0;      
	for(int i=0; i<n; i++)
		sum += nums[i];
	for(int i=0; i<n; i++) {                             
		if(leftSum == (sum - nums[i] - leftSum)) {   
			index = i;                                   
			break;                                       
		}                                                
		leftSum += nums[i];
	}
	return index; 
    }
};
