class Solution {
public:
    int mirrorDistance(int n) {
        int k = n;
        int r =0;
        while(n>0){
            int last = n%10;
            r= r*10+last;
            n=n/10;
        }
        return abs(r-k);
    }
};