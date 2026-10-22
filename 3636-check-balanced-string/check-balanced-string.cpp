class Solution {
public:
    bool isBalanced(string num) {
        int k=0;
        int j=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0){
                k+=num[i]-'0';
            }
            else{
                j+=num[i]-'0';
            }
        }
        if(k==j){
            return true;
        }
        else{
            return false;
        }
    }
};