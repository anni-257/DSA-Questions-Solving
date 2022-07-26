
// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1


int isPalindrome(string S)
	{
	    int i=0,j=S.length()-1;
	    
	    while(i<j){
	        if(S[i++]!=S[j--]){
	            return 0;
	        }
	    }
	    
	    return 1;
	}
