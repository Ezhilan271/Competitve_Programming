class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(auto i: nums1){
        int f=0;
        auto pos=find(nums2.begin(), nums2.end(), i);
        for (int j=(pos-nums2.begin())+1;j<nums2.size();j++){
            if (i<nums2[j]){
                result.push_back(nums2[j]);
                f=1;
                break;
            }
        }
        if (f!=1)
        result.push_back(-1);
    }
        return result;
    }
};
