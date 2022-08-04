 
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
    
    // https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
    
     // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        
        
        if((n&(n-1))==0 && n!=0){
            return true;
        }
        
        else 
            return false;
        
    }
