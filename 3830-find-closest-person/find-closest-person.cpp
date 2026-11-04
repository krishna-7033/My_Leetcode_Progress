class Solution {
public:
    int findClosest(int x, int y, int z) {
        int l = abs(z-x);
        int j = abs(z-y);
        if(j<l){
            return 2;
        }
        else if(j==l){
            return 0;
        }
        return 1;
    }
};