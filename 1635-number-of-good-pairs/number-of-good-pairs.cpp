class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c = nums.size();
        int count=0;
        for(int i=0;i<c;i++){
            for(int j=i+1;j<c;j++){
            if(nums[i]==nums[j] ){
                    count++;
                }
            }
        }
        return count;
    }
};