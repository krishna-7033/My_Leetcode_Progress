class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> KJ;
        for(char &k:s){
            KJ[k]++;
        }
        return KJ.size();
    }
};