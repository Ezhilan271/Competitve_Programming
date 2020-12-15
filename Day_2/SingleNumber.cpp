class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> numsm;
        for (auto i:nums){
            numsm[i]++;
        }
        for(auto i:numsm) {
            if(i.second==1) {
                return i.first;
            }
        }
        return 0;
    }
};
