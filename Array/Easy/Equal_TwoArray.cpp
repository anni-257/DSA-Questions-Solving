 	
 // https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&curated[]=1&sortBy=submissions
 	
 	/ approach 1: sort both array and compare
	// approach 2: XOR of two array
   	 //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<N;i++){
            mp[A[i]]++;
            mp[B[i]]--;
        }
        
        for(int i=0;i<N;i++){
            if(mp[B[i]]){
                return false;
            }  
        
        }
        
        return true;
        
    }
