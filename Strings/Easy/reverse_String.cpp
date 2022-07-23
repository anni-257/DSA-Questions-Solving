
// https://leetcode.com/problems/reverse-string/

void reverseString(vector<char>& s) {

/*
        int l=0,h=s.size()-1;
        for(;l<h;l++,h--){
            swap(s[l],s[h]);
        }
        
*/
	int i=0,j=s.size()-1;
	while(i<j){
	
		swap(s[i++],s[j--]);
		
	}
    }
