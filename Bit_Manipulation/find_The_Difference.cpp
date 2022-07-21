
// https://leetcode.com/problems/find-the-difference/

char findTheDifference(string s, string t) {
        int Xor=0;
        for(int i=0;i<s.length();i++){
            Xor^=s[i];
        }
        for(int i=0;i<t.length();i++){
            Xor^=t[i];
        }
        
        return Xor;
    }
