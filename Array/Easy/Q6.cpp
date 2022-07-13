// Wednesday 13 July 2022 10:19:55 AM 

#include<bits/stdc++.h>
using namespace std;

int search(vector<int> arr,int key){
	int low=0,high=arr.size()-1,mid=0;
	
	while(low<=high){
		mid=(low+high)>>1;
		if(arr[mid]==key) return mid;
		
		// if left part is sorted 
		else if(arr[low]<arr[mid]){
			// is key element lies in this part if yess
			if(key>=arr[low] && key<arr[mid]){
				high=mid-1;
			}
			
			// if no
			else
				low=mid+1;
		}
		
		// if right part is sorted
		else{
			if(key>arr[mid] && key<=arr[high]){
				low=mid+1;
			}
			else
				high=mid-1;
		}
	}
	
	return -1;
}

int main(){
	int key;
	vector<int> vec{4,5,6,7,8,1,2,3};
	for(auto x: vec) cout<<x<<" ";
	cout<<endl;
	cout<<"Enter your key"<<endl;
	cin>>key; 
	cout<<"Index : "<<search(vec,key)<<endl;
	return 0;
}
