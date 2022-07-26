
// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?page=2&category[]=Strings&sortBy=submissions 


//Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        int hash[26]={0};
        
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                hash[s[i]-'a']++;
            }else{
                hash[s[i]-'A']++;
            }
        }
        
        int max=-1;
        int ans=-1;
        for(int i=0;i<26;i++){
            if(max<hash[i]){
                ans=i;
                max=hash[i];
            }
        }
        
        
        return (ans+'a');
    }
