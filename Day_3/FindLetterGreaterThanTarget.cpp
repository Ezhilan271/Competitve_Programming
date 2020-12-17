class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,h=letters.size()-1,m=0;
        char v;
        if(target >= letters[h])  return letters[l];
        while (l <= h) {
            m= l+(h-l)/2;
            if (letters[m] <= target)  l=m+1;
            else if (letters[m] > target) {
                v= letters[m];
                h= m-1;
        }
    }
    return v;
    }
};
