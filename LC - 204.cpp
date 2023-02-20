204. Count Primes

CODE:
class Solution {
public:
    int countPrimes(int n) {
    int a = 0;
    vector<int> nums(n+1,true);
    for(int i=2;i<=sqrt(n);i++){
        if(nums[i]){
            for(int j = i*2; j <=n; j+=i){
                nums[j]= false;
            }
        }
    }
    int count = 0;
    for(int i=2;i<n;i++){
        if(nums[i])
            count++;
    }
    return count;
}
};
