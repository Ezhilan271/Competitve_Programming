class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,m;
        while (h>=l) { 
            int m = l + (h - l) / 2; 
            if (nums[m] == target) return m; 
            else if (nums[m] > target)  h = m-1; 
            else  l = m+1; 
        }
        if(nums[m]<target) 
            return m+1;
        else 
            return m;  
    }
};
