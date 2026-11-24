class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int i= 0;
        int j= height.size()-1;
        while(i<j){
            int k= j-i;
            int current;
            if(height[i]<=height[j]){
                current = height[i]*k;
                i++;
            }
            else{
                current = height[j]*k;
                j--;
            }
            maxwater = max(maxwater,current);
        }
        return maxwater;
    }
};