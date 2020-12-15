class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
    vector<int> ans;
    int a_count = 0, b_count = 0;
    unordered_set<int> value;
    for (auto sumb:B) {
        b_count = b_count + sumb;
        value.insert(sumb);
    }
    for (auto suma:A) {
        a_count = a_count + suma;
    }
    for (auto i:A) {
        int d = a_count - b_count;
        if (value.find(i - d/2) != value.end()) {
            ans.push_back(i);
            ans.push_back(i - d/2);
            return ans;
        }
    }
    return ans;
    }
};
