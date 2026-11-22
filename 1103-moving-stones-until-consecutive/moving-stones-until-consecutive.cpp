class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
         vector<int> s = {a, b, c};
        sort(s.begin(), s.end());
        int x = s[0], y = s[1], z = s[2];
        if (z - x == 2) {
            return {0, 0};
        }
        int minMoves = (y - x <= 2 || z - y <= 2) ? 1 : 2;
        int maxMoves = (z - x) - 2;
        return {minMoves, maxMoves};
    }
};