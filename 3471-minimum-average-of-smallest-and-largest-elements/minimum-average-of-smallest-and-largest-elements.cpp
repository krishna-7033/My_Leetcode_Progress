class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        float avg = (nums[0]+nums[n-1])/2.0;
        for(int i=0;i<n/2;i++){
            float check = (nums[i]+nums[n-1-i])/2.0;
            if(check<=avg){
                avg=check;
            }
        }
        return avg;
    }
};