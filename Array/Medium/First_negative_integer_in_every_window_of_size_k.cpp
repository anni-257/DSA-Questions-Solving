
// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                   
            vector<long long>ans;
            list<long long> ls;
            
            int i=0,j=0;
            while(j<N){
                if(A[j]<0){
                    ls.push_back(A[j]);
                }
                
                if(j-i+1<K){
                    j++;
                }
                
                else{
                    if(ls.empty()){
                        ans.push_back(0);
                    }else{
                        ans.push_back(ls.front());
                    }
                    
                    if(A[i]==ls.front()){
                        ls.pop_front();
                    } 
                    
                    i++;j++;
                }
            }
            
            return ans;
 }
