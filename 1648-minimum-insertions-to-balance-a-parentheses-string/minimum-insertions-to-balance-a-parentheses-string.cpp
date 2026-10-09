class Solution {
public:
    int minInsertions(string s) {
        int res =0;
        int need=0;
        for(char &a:s){
            if(a=='('){
                if (need % 2 != 0) {
                    res++;
                    need--;
                }
                need += 2;
                } else {
                need--;
                 if (need < 0) {
                    res++;
                    need += 2;
                }
             }

            }
        return need+res;
    }
};