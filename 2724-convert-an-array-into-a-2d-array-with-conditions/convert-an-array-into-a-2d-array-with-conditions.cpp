class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>check;
        vector<vector<int>>result;
        int max_freq = 0;
        for(auto K:nums){
            check[K]++;
            max_freq = max(max_freq,check[K]);
        }
        result.resize(max_freq);
        for(auto p:check){
            int val = p.first;
            int count = p.second;
            for(int i =0;i<count;i++){
                result[i].push_back(val);
            }
           
        }
         return result;
    }
};