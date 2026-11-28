class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<vector<int>>ans;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                ans.push_back({arr[i], arr[j]});
            }
        }
        sort(ans.begin(), ans.end(), [](const vector<int>& a, const vector<int>& b) {
            return (long long)a[0] * b[1] < (long long)b[0] * a[1];
        });

        return ans[k - 1];
    }
};