class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>check;
        for(char K:s){
            check[K]++;
        }
        for(int i=0;i<s.size();i++){
            if(check[s[i]]==1){
                return i;
            }
        }
         return -1;
    }
};