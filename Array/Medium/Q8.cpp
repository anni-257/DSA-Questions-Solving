#include<bits/stdc++.h>
using namespace std;

// https://www.google.com/url?q=https://leetcode.com/problems/best-time-to-buy-and-sell-stock/&sa=D&source=editors&ust=1657805667298642&usg=AOvVaw1-_v8Rx8ZK-FCUGdbg_rMF

// Best Time to Buy and Sell Stock

int bestTimeToBuy(vector<int> vec){
	int mini=INT_MAX;
	int ans=0;
	for(int i=0;i<vec.size();i++){
		mini=min(mini,vec[i]);
		ans=max(ans,vec[i]-mini);
	}
	
	return ans;
}

int main(){
	vector<int> vec={7,1,6,3,10,4,8};
	cout<<"Max Price= "<<bestTimeToBuy(vec)<<endl;
	
	return 0;
}
