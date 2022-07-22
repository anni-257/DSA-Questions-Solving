// https://leetcode.com/problems/intersection-of-two-arrays/

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        unordered_set<int> st(nums1.begin(),nums1.end());
        
        for(auto x: nums2){
            if(st.erase(x)){
                nums3.emplace_back(x);
            }
        }
        
        return nums3;
        
    }
