#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/longest-common-prefix/

string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0){
            return ans;
        }
        
        sort(strs.begin(),strs.end());
        
        string a=strs[0];
        string b=strs[strs.size()-1];
        
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                ans+=a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
        
    }
    
    int main(){
    	vector<string> str{"aaa","aa","aaa"};
    	
    	cout<<"Longest prefix is: "<<longestCommonPrefix(str)<<endl;
    	
    	return 0;	
    	
    	
    }
