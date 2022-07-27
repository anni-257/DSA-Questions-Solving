
// GFG
// https://practice.geeksforgeeks.org/problems/key-pair5616/1

	// Function to check if array has 2 elements
	// whose sum is equal to the given value
bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        auto it=mp.find(x-arr[i]);
	        
	        if(it!=mp.end()){
	            return true;
	        }
	        
	        mp[arr[i]]=i;
	    }
	    return false;
}

// Leetcode
// https://leetcode.com/problems/two-sum/

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;
    
    for (int i = 0;nums.size(); ++i) {
        auto it = imap.find(target - nums[i]);
        
        if (it != imap.end()) 
            return vector<int> {i, it->second};
            
        imap[nums[i]] = i;
    }
}
