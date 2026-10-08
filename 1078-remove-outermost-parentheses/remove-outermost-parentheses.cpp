class Solution {
public:
    string removeOuterParentheses(string s) {
        string k="";
        int see =0;
        for(char &j:s){
            if(j=='('){
                 if(see>0){
                    k+=j;
                 }
                 see++;
            }
            else{
                see--;
                if(see>0){
                    k+=j;
                }
            }
        }
        return k;
    }
};