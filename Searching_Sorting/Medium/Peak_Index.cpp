#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/peak-index-in-a-mountain-array/

int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-1,mid=l+(h-l)/2;
        
        while(l<h){
            if(arr[mid]<arr[mid+1]){
                l=mid+1;
            }
            else{
                h=mid;
            }
            
            mid=l+(h-l)/2;
        }
        
        return mid;
    }
    
 int main(){
 	vector<int> vec{1,5,7,10,15,5,3,2};
 	cout<<"Peak index :"<<peakIndexInMountainArray(vec)<<endl;
 	return 0;
 }
