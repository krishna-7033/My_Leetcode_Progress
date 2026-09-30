class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_o = *max_element(nums.begin(),nums.end());
        int index = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max_o) {
                index = i;
                break;
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
           if(max_o>=2*nums[i]){
             continue;
           }
           else{
            return -1;
           }
        }
        return index;
    }
};