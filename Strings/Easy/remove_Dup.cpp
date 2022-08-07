
// https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1

string removeDuplicates(string str) {
	    // code here
	    map<char,int> m;
	    string word="";

	    for(int i=0;i<str.length();i++)
	    {
	       if(m[str[i]]>=1)
	       {
	           continue;
	       }
	       else
	       {
	           word=word+str[i];
	           m[str[i]]=1;
	       }
	    }
	    return word;
}
