class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum =0;
        for (auto k:nums){
           sum+=k;
        }
        int result = sum%k;
        return result;
    }
};