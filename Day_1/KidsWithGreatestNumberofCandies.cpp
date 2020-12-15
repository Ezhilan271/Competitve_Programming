class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_value= *max_element(candies.begin(), candies.end());
        vector<bool> boolv;
        int m = 0 ,i = 0;;
        for(i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies)>=max_value) boolv.push_back(true);
            
            else boolv.push_back(false);
        }
        return boolv;
    }
};
