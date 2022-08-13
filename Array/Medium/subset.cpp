 
 // https://leetcode.com/problems/subsets/
 
 void sub(vector<int>nums,vector<int> out,int index,vector<vector<int>>& ans){
        
        if(index>=nums.size()){
            ans.push_back(out);
            return;
        }
        
        // exclude
        sub(nums,out,index+1,ans);
        
        // include
        out.push_back(nums[index]);
        sub(nums,out,index+1,ans);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> out;
        int index=0;
        
        sub(nums,out,index,ans);
        
        return ans;
        
    }
