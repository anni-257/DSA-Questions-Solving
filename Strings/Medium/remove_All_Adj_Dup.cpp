
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

string removeDuplicates(string s) {
        int i=0;
        int len=s.size();
        for(int j=0;j<len;j++,i++){
            s[i]=s[j];
            if(i>0 && s[i-1]==s[i]){
                i-=2;
            }
        }
        
        return s.substr(0,i);
        
    }
