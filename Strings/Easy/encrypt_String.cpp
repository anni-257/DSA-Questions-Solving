
// https://practice.geeksforgeeks.org/problems/encrypt-the-string-10337/1

	/*
		 void reverse(string& s){
        int i=0,j=s.size()-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }
    }
    string encryptString(string s){
        string x=" ";
        
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                int j=i+1;
                while(s[i]==s[j]){j++; }
                int val=j-i;
                x.push_back(s[i]);
                x=x+to_string(val);
                i=j-1;
            }else{
                x.push_back(s[i]);
                x.push_back(1+'0');
            }
        }
        
        reverse(x);
        
        return x;
        
        
    }
	*/
   void reverse(string& temp){
        int i = 0;
        int j = temp.length()-1;
        
        while(i < j){
            swap(temp[i++], temp[j--]);
        }
       
    }
    
    string encryptString(string s){
        
        string ans = "";
        int count = 1;
        int i = 0;
        for(i = 0; i < s.length()-1; i++){
            // cout << ans << " " << count << endl;
            if (s[i] == s[i+1]){
                count++;
            }
            else{
                ans += s[i];
                ans += to_string(count);
                count = 1;
            }
        }
        ans += s[i];
        ans += to_string(count);
        
        reverse(ans);
        
        return ans;
    }
