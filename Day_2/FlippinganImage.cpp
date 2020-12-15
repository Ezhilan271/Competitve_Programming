class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int temp;
        for (int i=0;i<A.size();i++){
            for (int j=A[i].size()-1,k=0;k<(A[i].size())/2;j--,k++){
                temp=A[i][k];
                A[i][k]=A[i][j];
                A[i][j]=temp;
            }
        }
        for (int i=0;i<A.size();i++){
            for (int j=0;j<A[i].size();j++){
                if(A[i][j]==0)  A[i][j]=1;
                else  A[i][j]=0;
            }
        }
        return A;
    }
};
