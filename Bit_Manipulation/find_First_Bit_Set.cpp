

// https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1?page=6&curated[]=1&sortBy=submissions


    // (n&~(n-1)) always return the binary number containing the rightmost set bit as 1.
    // We will find that position of rightmost set bit is always equal to log2(Number)+1
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {   
        int index=0;
        while(n!=0){
            index++;
            
            if(n&1){
                break;
            }
            
            n=n/2;
        }
        
        return index;
    }
