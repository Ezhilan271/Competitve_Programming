class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0, i=0;
        int bitx[32],bity[32];
        while ((x > 0) || (y>0)) { 
            bitx[i] = x % 2; 
            x = x / 2; 
            bity[i] = y % 2; 
            y = y / 2;             
            i++;
        }
        for (int j=0;j<i;j++)
           if (bitx[j]!=bity[j])  count++;
        return count;
        
    }
};
