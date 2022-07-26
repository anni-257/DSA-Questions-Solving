
// https://leetcode.com/contest/weekly-contest-303/problems/first-letter-to-appear-twice/

char repeatedCharacter(string s) {
        unordered_set<char>st;
        
        for(int i=0;i<s.length();i++){
            if(st.count(s[i])){
                return s[i];
            }
            st.insert(s[i]);
        }
        
        return 0;
    }
