
// https://leetcode.com/problems/string-compression/


int compress(vector<char>& chars) {
        int i=0;
        int indexCount=0;
        int n=chars.size();
        
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            
            chars[indexCount++]=chars[i];
            
            int cnt=j-i;
            
            if(cnt>1){
                string s=to_string(cnt);
                for(auto x: s){
                    chars[indexCount++]=x;
                }
            }
            i=j;
        }
        
        return indexCount;
    }
