    // https://leetcode.com/contest/biweekly-contest-86/problems/find-subarrays-with-equal-sum/
    
    bool findSubarrays(vector<int>& preSum) {
//          int *preSum=new int[nums.size()];
        
//         preSum[0]=nums[0];
//         map<int,int> mp;
        
//         for(int i=1;i<nums.size();i++){
//             preSum[i]=preSum[i-1]+nums[i];
//             //cout<<preSum[i]<<" ";
//         }
        map<int,int>mp;
        int j=0,i=0,k=2;
        while(j<preSum.size()){
            
            if(j-i+1<k){
                j++;
            }else{
                int sum=preSum[i]+preSum[j];
                if(mp.find(sum)!=mp.end()){
                    return true;
                }else{
                    mp[sum]++;
                }
                
                i++;
            }
        }
        
        return false;
    }
