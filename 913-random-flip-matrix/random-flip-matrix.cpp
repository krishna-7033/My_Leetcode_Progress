class Solution {
private:
    int m, n, rem;
    unordered_map<int, int> mp;

public:
    Solution(int m, int n) : m(m), n(n), rem(m * n) {}
    
    vector<int> flip() {
        int r = rand() % rem;
        --rem;
        int x = mp.count(r) ? mp[r] : r;
        mp[r] = mp.count(rem) ? mp[rem] : rem;
        return {x / n, x % n};
    }
    
    void reset() {
        mp.clear();
        rem = m * n;
    }
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */