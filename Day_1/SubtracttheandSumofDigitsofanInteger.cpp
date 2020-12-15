class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1,r;
        while (n!=0){
            r=n%10;
            n=n/10;
            sum+=r;
            product*=r;
        }
        return (product-sum);
    }
};
