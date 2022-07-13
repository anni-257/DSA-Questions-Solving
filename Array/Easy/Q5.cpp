// Wednesday 13 July 2022 08:28:30 AM 

#include<bits/stdc++.h>
using namespace std;

// Chocolate Distribution Problem

// https://www.google.com/url?q=https://www.geeksforgeeks.org/chocolate-distribution-problem/&sa=D&source=editors&ust=1657682926027367&usg=AOvVaw2TM9_lQEq9zBIFYibD7uB3

int diffMinimum(vector<int> arr,int m){
	int minSum=INT_MAX;
	
	if(m==0 || arr.size()==0){
		return 0;
	}
	
	sort(arr.begin(),arr.end());
	
	for(int i=0;i+m-1<arr.size();i++){
		if(minSum>(arr[i+m-1]-arr[i])){
			minSum=(arr[i+m-1]-arr[i]);
		}
	}
	
	return minSum;
}

int main(){
	vector<int> vec{3, 4, 1, 9, 56, 7, 9, 12};
	cout<<"Minimum Difference is: "<<diffMinimum(vec,0)<<endl;
	return 0;
}
