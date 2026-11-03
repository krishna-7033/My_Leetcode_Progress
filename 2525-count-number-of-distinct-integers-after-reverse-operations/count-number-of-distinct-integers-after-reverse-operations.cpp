class Solution {
public:
    int reverse(int n){
        int reversed = 0;
        while(n!=0){
            reversed = reversed*10+(n%10);
            n/=10;
        }
        return reversed;

    }
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>temp;
        unordered_map<int,int>result;
        int count;
        for(int i=0;i<nums.size();i++){
            temp.push_back(reverse(nums[i]));
        }
        for(auto k:nums){
            temp.push_back(k);
        }
        for(auto j:temp){
            result[j]++;
        }

      return result.size();
    }

};