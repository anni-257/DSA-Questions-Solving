// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

int subtractProductAndSum(int n) {
        int sum=0,mul=1;
        
        while(n!=0){
            sum+=n%10;
            mul*=n%10;
            
            n=n/10;
        }
        
        
        return mul-sum;
    }
