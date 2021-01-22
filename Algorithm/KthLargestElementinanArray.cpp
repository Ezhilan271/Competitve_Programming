#include <bits/stdc++.h>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int max;
        while(k--){
            max=*max_element(nums.begin(),nums.end());
            vector<int>::iterator it;
            it= find(nums.begin(), nums.end(), max);
            nums.erase(it);
        }
        return max;
    }
};
