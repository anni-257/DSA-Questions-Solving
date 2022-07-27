
// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1


int getPairsCount(int arr[], int n, int k) {
        int cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            auto it=mp.find(k-arr[i]);
            
            if(it!=mp.end()){
                cnt+=it->second;
            }
            
            mp[arr[i]]++;
        }
        
        return cnt;
    }
