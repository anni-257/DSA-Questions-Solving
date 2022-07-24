
// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-unsorted-array4141/1

vector<int> removeDuplicate(int A[], int N){
        int max=*max_element(A,A+N);
        
        vector<int> hash(max+1);
        vector<int> ans;
        for(int i=0;i<N;i++){
            hash[A[i]]++;
        }
        
        for(int i=0;i<N;i++){
            if(hash[A[i]]>=1){
                ans.emplace_back(A[i]);
                hash[A[i]]=0;
            }
        }
        
        return ans;
        
    }
