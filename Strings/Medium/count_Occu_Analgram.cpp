//{ Driver Code Starts
#include <bits/stdc++.h>

// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1


using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool equals(int arr1[], int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
            //cout<<arr1[i]<<" "<<arr2[i]<<endl;
        }
        return true;
    }
	int search(string pat, string txt) {
	    int hash1[26]={0};
	    int hash2[26]={0};
	    int i=0,j=0,cnt=0;
	    
	    for(int i=0;i<pat.size();i++){
	        hash1[pat[i]-'a']++;
	    }
	    
	    while(j<txt.size()){
	        
	        hash2[txt[j]-'a']++;
	        
	        if(j-i+1<pat.size()){
	            j++;
	        }else{
	            
	            if(equals(hash1,hash2)){
	
	                cnt++;
	            }
	            
	            hash2[txt[i]-'a']--;
	            i++;
	            j++;
	        }
	        
	    }
	    
	    return cnt;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
