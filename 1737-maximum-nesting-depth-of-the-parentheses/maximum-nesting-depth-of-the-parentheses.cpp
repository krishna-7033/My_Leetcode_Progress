class Solution {
public:
    int maxDepth(string s) {
        int max_D=0;
        int depth=0;
        for(char &c:s){
            if(c=='('){
               depth+=1;
               max_D = max(max_D,depth);
            }
            else if(c==')'){
               depth-=1;

            }
        }
        return max_D;
    }
};