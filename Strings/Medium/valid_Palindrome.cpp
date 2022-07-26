// https://leetcode.com/problems/valid-palindrome/

// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
     // Initial Approach
    // O(n) and space=O(n);
    char toLower(char c){
        char ch=0;
        if((c>='a' && c<='z') || (c>='0' && c<='9')){
            return c;
        }
        
        ch= c-'A'+'a';
        
        return ch;
            
    }
    
    bool isPalindrome(string s) {
        
        string temp="";
        
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                temp.push_back(s[i]);
            }
        }
        
        int l=0,h=temp.size()-1;
        cout<<"Temp "<<temp<<endl;
        while(l<h){
            if(toLower(temp[l]) != toLower(temp[h])){
                return false;
            }else{
                l++;
                h--;
            }
        }
        
        return true;
        
        
    }
    */

   bool isPalindrome(string s){
        int i=0,j=s.size()-1;

        while(i<j){
            while(!isalnum(s[i])){
                i++;
            }
            while(!isalnum(s[j])){
                j--;
            }

            if(toupper(s[i++])!=toupper(s[j--])){
                return false;
            }
        
        }

        return true;

   }

    int main(){
        string s=" n*****I^^))ti^^^^^7^^n";
        cout<<"Is palindrome: "<<boolalpha<<isPalindrome(s)<<endl;
        return 0;
    }
