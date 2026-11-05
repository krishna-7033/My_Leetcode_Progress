class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>check;
        int sum =0;
        for(auto k:nums){
            check[k]++;
            
        }
        for(auto j:check){
            if(j.second<2){
                sum+=j.first;
            }
        }
        return sum;
    }
};