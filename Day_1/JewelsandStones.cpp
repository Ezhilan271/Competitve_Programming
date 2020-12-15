class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int c=0;
        for (int i=0;i<J.size();i++){
            for (int k=0;k<S.size();k++){
                if (J[i]==S[k])
                    c++;
            }
        }
        return (c);
    }
};
