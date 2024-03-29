349. Intersection of Two Arrays

CODE:
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = (int)nums1.size(), n2 = (int)nums2.size();
        int i1 = 0, i2 = 0;
        vector<int> res;
        while(i1 < n1 && i2 < n2){
            if(nums1[i1] == nums2[i2]) {
                res.push_back(nums1[i1]);
                i1++;
                i2++;
            }
            else if(nums1[i1] > nums2[i2]){
                i2++;
            }
            else{
                i1++;
            }
            while(i1 > 0 && i1 < n1 && nums1[i1] == nums1[i1 - 1]) i1++;
            while(i2 > 0 && i2 < n2 && nums2[i2] == nums2[i2 - 1]) i2++;
        }
        return res;
    }
};
