
// https://leetcode.com/problems/power-of-three/

// The positive divisors of 3^19 are exactly the powers of 3 from 3^0 to 3^19. That's all powers of 3 in the possible range here (signed 32-bit integer). So just check whether the number is positive and whether it divides 3^19

bool isPowerOfThree(int n) {
        int max3PowInt=1162261467;// 3**19 max for int 3**20 is greater than INT_MAX;
        
        if(n<=0 || n>max3PowInt){
            return false;
        }
        
        return max3PowInt%n==0;
    }
