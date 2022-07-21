 
 // https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
 
 int countOdds(int low, int high) {
        int range=high-low+1;
        
        if(low&1 && high&1 ){ // if both ends starts with odd 
            return (range/2)+1; // odd values
        }
        
        else{ // 1.both are even 2.start with odd and end with even 3.start with even and end with odd
           return range/2; // odd values
        }
    }
