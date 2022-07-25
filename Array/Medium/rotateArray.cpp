
// https://leetcode.com/problems/rotate-array/

void rotate(vector<int>& nums, int k) {
       /* 
       
        k %= nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
        */
        
        vector<int> temp(nums.size());
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%temp.size()]=nums[i];
        }
        
        nums=temp;
        
        
    }
