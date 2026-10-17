class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>check;
        for(auto k:nums){
            check[k]++;
        }
        for(auto j:check){
            if(j.second<3){
                return j.first;
            }
        }
        return 0;
    }
};