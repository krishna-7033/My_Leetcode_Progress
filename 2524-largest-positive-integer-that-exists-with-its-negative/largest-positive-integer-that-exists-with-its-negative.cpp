class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int max_k = -1;
        
        for (int num : nums) {
            if (num > 0 && seen.count(-num)) {
                max_k = max(max_k, num);
            }
        }
        
        return max_k;
    }
};