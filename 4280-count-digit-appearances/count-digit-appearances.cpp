class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count =0;
       for(auto k:nums){
        int temp = abs(k);
        if(k==0&&digit==0){
            count++;
        }
        while(temp>0){
           if(temp%10==digit){
            count++;
           }
           temp/=10;
        }
       }
        return count;
    }
};