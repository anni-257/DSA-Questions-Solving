

// https://practice.geeksforgeeks.org/problems/anagram-of-string/1?page=1&category[]=anagram&sortBy=submissions

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
        int arr[26]={0};
        int arr2[26]={0};

        for(int i=0;i<str1.size();i++){
            arr[str1[i]-'a']++;
        }
    
        for(int i=0;i<str2.size();i++){
            arr2[str2[i]-'a']++;
        }
    
        int cnt=0;
        for(int i=0;i<26;i++){
            cnt+=abs(arr[i]-arr2[i]);
        }
        
        return cnt;
  
}
