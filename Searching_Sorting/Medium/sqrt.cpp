#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sqrtx/

int mySqrt(int n){
	int l=0,h=n;
	long long int mid=l+(h-l)/2;
	int ans=-1;
	
	while(l<=h)
	{
		long long int square=mid*mid;
		if(square==n) return mid;
		
		else if(square<n){
			ans=mid;
			l=mid+1;
		}
		else{
			h=mid-1;
		}
		
		mid=l+(h-l)/2;
		
	}
	
	return ans;
}

double morePrecision(int n,int precision,int tempSol){
	double factor=1;
	double ans=tempSol;
	for(int i=0;i<precision;i++){
		factor=factor/10;
		
		for(double j=ans;j*j<n;j+=factor){
			ans=j;
		}
	}
	
	return ans;
	
}
int main(){
	int n,x;
	cout<<"Enter Number and precision: ";
	cin>>n>>x;
	int tempSol=mySqrt(n);
	cout<<"tempSol: "<<tempSol<<endl;
	cout<<"Square root of a number is: "<<morePrecision(n,x,tempSol);
	return 0;
}
