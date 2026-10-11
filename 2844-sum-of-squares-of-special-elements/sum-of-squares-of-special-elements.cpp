class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           if(n%(i+1)==0){
            int j= nums[i]*nums[i];
            k+=j;
           }
        }
        return k;
    }
};