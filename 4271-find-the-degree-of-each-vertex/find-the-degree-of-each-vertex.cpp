class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
    vector<int>result;
    for(int i=0;i<matrix.size();i++){
        int sum=0;
        for(int j=0;j<matrix[i].size();j++){
            sum+=matrix[i][j];
        }
        result.push_back(sum);
    }
    return result;
    }
};