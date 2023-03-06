1539. Kth Missing Positive Number

CODE:
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int i: arr)
        {
            if(i<=k) {
                k++;
            }
            else{
                break;
            }
        }
        return k;
    }
};
