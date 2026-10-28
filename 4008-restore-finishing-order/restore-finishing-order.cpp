class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int>see;
        vector<int>result;
        for(auto k:friends){
            see[k]++;
        }
        for(int i=0;i<order.size();i++){
            if(see.count(order[i])){
                  result.push_back(order[i]);
            }
        }
        return result;
    }
};