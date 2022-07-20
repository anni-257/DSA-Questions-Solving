
// https://leetcode.com/problems/unique-number-of-occurrences/

bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> st;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        for(auto x: mp){
            int val=x.second;
            if(st.count(val)){
                return false;
            }
            
            st.insert(val);
        }
        
        return true;
        
    
    }
