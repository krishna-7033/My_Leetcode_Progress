class Solution {
public:
    long long maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1 || k <= 0) return 0;

        int min_idx = min_element(nums.begin(), nums.end()) - nums.begin();

        auto solve_linear = [&](int start) -> long long {
            vector<long long> dp(n + 1, 0);
            long long ans = 0;
            const long long NEG_INF = LLONG_MIN / 4;

            for (int step = 0; step < k; ++step) {
                vector<long long> new_dp(n + 1, 0);
                long long best_minus = NEG_INF;
                long long best_plus = NEG_INF; 

                for (int j = 0; j < n; ++j) {
                    long long val = nums[(start + j) % n];
                    best_minus = max(best_minus, dp[j] - val);
                    best_plus = max(best_plus, dp[j] + val);

                    new_dp[j + 1] = max({
                        new_dp[j],
                        best_minus + val,
                        best_plus - val
                    });
                }
                dp = move(new_dp);
                ans = max(ans, dp[n]);
            }
            return ans;
        };

        return max(solve_linear(min_idx), solve_linear((min_idx + 1) % n));
    }
};