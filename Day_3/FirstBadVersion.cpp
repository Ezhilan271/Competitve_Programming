
class Solution {
public:
    int firstBadVersion(int n) {
        int i=1,m;
        while(i<n){
            m=i+ (n-i)/2;            
            if(isBadVersion(m)) 
                n=m;            
            else  i=m+1;         
        }
        return i;
    }
};
