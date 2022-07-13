#include<bits/stdc++.h>
using namespace std;

// Wednesday 13 July 2022 08:15:17 AM 

// https://www.google.com/url?q=https://leetcode.com/problems/contains-duplicate/&sa=D&source=editors&ust=1657682926027300&usg=AOvVaw1oAwfI8oPNtmlgX4eQotry

// Contains Duplicate

bool isDuplicate(vector<int> & arr){

/*	1st Approach --> O(N)

	return arr.size() > set<int>(arr.begin(),arr.end()).size();
*/

	// 2nd Approach --> O(logn) 
	
	set<int> st;
	
	for(int i=0;i<arr.size();i++){
		if(st.count(arr[i])){
			return true;
		}
		
		st.insert(arr[i]);
	}
	
	return false;
}

int main(){
	vector<int> vec{1,2,3,3,4,5,6,7};
	cout<<"Is Duplicate Contains : "<<boolalpha<<isDuplicate(vec)<<endl;
	return 0;
}
