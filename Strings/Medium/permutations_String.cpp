	
	// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
	
	vector<string>find_permutation(string S)
		{
		    vector<string>ans;
		    sort(S.begin(),S.end());
		    do{
		        ans.push_back(S);
		    }while(next_permutation(S.begin(),S.end()));
		    
		    return ans;
		}
