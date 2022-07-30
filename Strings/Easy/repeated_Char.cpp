
// https://practice.geeksforgeeks.org/problems/repeated-character2058/1

char firstRep (string s)
    {
        int hash[26]={0};
        
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }
        
        for(int i=0;i<s.size();i++){
            if(hash[s[i]-'a']>1){
                return s[i];
            }
        }
        
        return '#';
        
    }
