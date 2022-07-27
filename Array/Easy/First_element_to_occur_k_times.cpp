
// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=1&curated[]=1&sortBy=submissions

// Use map to store the occurence of each element and return the answer once you find the  element occuring k times. 

 int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp[a[i]]>=k){
                return a[i];
            }
        }
        
        return -1;
    }
