class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0,s=nums.size();
        for (int i=0;i<s;i++){
            if (i!=s-1){
                for (int j=i+1;j<s;j++){
                    if (nums[i]==nums[j])
                       count++;
                }
            }
        }
        return count;
    }
};
