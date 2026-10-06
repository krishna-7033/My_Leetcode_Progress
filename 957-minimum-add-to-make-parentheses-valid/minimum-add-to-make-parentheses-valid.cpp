class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int see = 0;
        for(char a:s){
          if(a =='('){
            count+=1;
          }
          else if(a==')'){
            if(count>0){
            count-=1;
          }
            else{
            see+=1;
           }
          }
        }
        return count+see;
    }
};