 
 // https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?page=1&curated[]=1&sortBy=submissions
 
 string longestCommonPrefix (string arr[], int n)
    {
        string ans="";
        sort(arr,arr+n);    // to avoid this ["aaa","aa","aaa"]
        
        string s=arr[0];
        string e=arr[n-1];
        
        for(int i=0;i<s.size();i++){
            if(s[i]==e[i]){
                ans+=s[i];
            }
            else{
                if(ans.empty()){
                    return "-1";   // important condition 
                }
                break;
            }
        }
        
        return ans;
    }
