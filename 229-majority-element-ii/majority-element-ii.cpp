class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n =nums.size();
       unordered_map<int,int>k;
       vector<int>pika;
        for(auto j:nums){
            k[j]++;
        }
        for(auto l:k){
            if(l.second>n/3){
                pika.push_back(l.first);
            }
        }
        return pika;
    }
};