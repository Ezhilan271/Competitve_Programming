class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for (auto i:nums){
            int r,n=0;
            while (i!=0){
                r=i%10;
                n+=1;
                i/=10;
            }
            count+=(n%2==0)?1:0;
        }
        return count;
    }
};
