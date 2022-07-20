 
 // https://leetcode.com/problems/power-of-two/
 
 bool isPowerOfTwo(int n) {
        
        int ans=1;
        for(int i=0;i<=30;i++){
            
            
            if(ans==n)  // checking for 1
                return true;
            
            if(ans<INT_MAX/2) // 2^30 to 2^31-1
                ans=ans*2;
        }
        
        return false;
    }
