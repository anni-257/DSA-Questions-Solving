#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/binary-search/

int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid=l+(h-l)/2;
        while(l<=h){
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
            
            mid=l+(h-l)/2;
        }
        
        return -1;
    }
    
int main(){
	vector<int> vec{1,22,33,44,555,6666,777777,1000000};
	cout<<"Search index of 555 is "<<search(vec,555)<<endl;
	return 0;
}
