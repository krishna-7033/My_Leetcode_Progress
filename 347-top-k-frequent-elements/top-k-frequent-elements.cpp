class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mumma;
        for (auto j : nums) {
            mumma[j]++;
        }

        vector<int> beta;
        for (auto b : mumma) {
            beta.push_back(b.first);
        }

        sort(beta.begin(), beta.end(), [&](int a, int b) {
            return mumma[a] > mumma[b];
        });

        while (beta.size() > k) {
            beta.pop_back();
        }

        return beta;
    }
};
