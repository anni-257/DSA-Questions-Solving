

// https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1

 int findPosition(int N) {
        if(N==0){
            return -1;  // speacial case;
        }
        if((N&(N-1))==0){
            int cnt=1;
            while(N){
                if(N&1){
                    return cnt;
                }
                cnt++;
                N=N>>1;
                
            }
            
            return cnt;
        }
        
        return -1;
    }
