class Solution {
public:
    int numTrees(int n) {
        vector<int>Aura(n+1,0);
        Aura[0]=1;
        Aura[1]=1;
        for(int i=2;i<=n;++i){
            for(int j=1;j<=i;++j){
                Aura[i]+=Aura[j-1]*Aura[i-j];
            }
        }
        return Aura[n];
    }
};