
// https://leetcode.com/problems/reverse-only-letters/

string reverseOnlyLetters(string s) {
        int i=0,h=s.size()-1;
        
        while(i<h){
            while(i<h && !isalpha(s[i])){
                i++;
            }
            while(i<h && !isalpha(s[h])){
                h--;
            }
            
            if(i<h){
                swap(s[i++],s[h--]);
            }
        }
        
        return s;
    }
