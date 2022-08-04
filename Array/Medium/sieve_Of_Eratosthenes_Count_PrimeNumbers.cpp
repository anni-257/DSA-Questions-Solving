

// https://practice.geeksforgeeks.org/problems/count-primes-in-range1604/1

int countPrimes(int L, int R) {
        int cntL=0,cntR=0;
        vector<bool> prime(R+1,true);
        prime[0]=prime[1]=false;
        
        for(int i=2;i*i<=R;i++){
            if(!prime[i])
                continue;
            
            for(int j=i*i;j<=R;j+=i){
                prime[j]=false;
            }
        }
        
        for(int i=L;i<=R;i++){
            if(prime[i]){
                cntR++;
            }
        }
        
        return cntR;
        
    }
