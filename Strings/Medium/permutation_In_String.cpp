
// https://leetcode.com/problems/permutation-in-string/

bool equals(int arr1[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
            return false;
        }
    }
        
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int hash1[26]={0};
        int hash2[26]={0};
        
        for(int i=0;i<s1.size();i++){
            hash1[s1[i]-'a']++;
        }
        int i=0,j=0;
        
        while(j<s2.size()){
            hash2[s2[j]-'a']++;
            
            if(j-i+1<s1.size()){
                j++;
            }else{
                if(equals(hash1,hash2)){
                    return true;
                }
                hash2[s2[i]-'a']--;
                i++;j++;
            }
        }
        
        return false;
        
    }
