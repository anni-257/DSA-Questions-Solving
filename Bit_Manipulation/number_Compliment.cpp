
// https://leetcode.com/problems/number-complement/

int findComplement(int num) {
        int m=num;
        if(num==0){
            return 1;
        }
        
        int mask=0;
        while(num!=0){
            mask=mask<<1 | 1;
            num=num>>1;
        }
        
        int ans= (~m)&mask;
        
        return ans;
    }
