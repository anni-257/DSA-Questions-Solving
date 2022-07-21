
// https://leetcode.com/problems/find-the-duplicate-number/


int findDuplicate(vector<int>& nums) {
       int l=0,h=nums.size()-1;
        int mid=l+(h-l)/2;
        
        while(l<=h){
            int cnt=0;
            
            for(auto x:nums){
                if(x<=mid){
                    cnt++;
                }
            }
            
            if(cnt<=mid){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
            
            mid=l+(h-l)/2;
        }
        
        return l;
    }
