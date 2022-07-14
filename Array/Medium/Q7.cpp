// Thursday 14 July 2022 04:19:53 PM 
#include<bits/stdc++.h>
using namespace std;

//https://www.google.com/url?q=https://leetcode.com/problems/next-permutation/&sa=D&source=editors&ust=1657799133653805&usg=AOvVaw1eypz8Bk210mIUjOrwLrG4

void nextPermutation(vector<int> &vec){
	int n=vec.size(),i;
	// Scan array from right to left as vec[i]<vec[i+1]
	
	for(i=n-2;i>=0;i--){
		if(vec[i]<vec[i+1]){
			break;
		}
	}
	
	// if this is last lastPermutation then return first permutation
	if(i<0){
		reverse(vec.begin(),vec.end());
	}
	// Scan again from right to left for element is greater than vec[i]; i.e vec[j]>vec[i]
	else{
		for(int j=n-1;j>i;j--){
			if(vec[j]>vec[i])
			// if true swap with next greater element 
				swap(vec[i],vec[j]);
		}
		
		// after swapping reverse the element
		reverse(vec.begin()+i+1,vec.end());
	}
}

int main(){
	vector<int> vec{9,6,4,3,2};
	nextPermutation(vec);
	for(auto x: vec) cout<<x<<" ";
	
	return 0;
}
