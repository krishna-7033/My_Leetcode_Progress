class Solution {
public:
    bool isThree(int n) {
        int k=sqrt(n);
        if (k * k != n) return false;
        if (k <= 1) return false;
        if (k == 2) return true; 
        if (k % 2 == 0) return false;
        for (int i = 3; i*i <= k; i += 2) {
        if (k % i == 0) {
            return false;
        }
      }
      return true;
    }
};