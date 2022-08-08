
// https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1?page=1&category[]=Strings&curated[]=7&sortBy=submissions


string secFrequent (string arr[], int n)
    {
        string ans="";
        map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        // if(mp.size()==1){  // in case aaa,aaa,aaa
        //     return ans;
        // }
        
        int max=INT_MIN, secMax=INT_MIN;
        for(auto x: mp){
            if(max<x.second){
                secMax=max;
                max=x.second;
            }else if(secMax<x.second){
                secMax=x.second;
            }
        }
        
        for(auto x:mp){
            if(x.second==secMax){
                return x.first;
            }
        }
        
        return ""; // aaa aaa aaa
    }
