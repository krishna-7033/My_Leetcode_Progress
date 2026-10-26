class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
       unordered_map<int,vector<int>>result;
       vector<vector<int>>ans;
       for(int i=0;i<groupSizes.size();i++){
        int size = groupSizes[i];
        result[size].push_back(i);

        if(result[size].size()==size){
            ans.push_back(result[size]);
            result[size].clear();
        }
       }
       return ans;
       
    }
};