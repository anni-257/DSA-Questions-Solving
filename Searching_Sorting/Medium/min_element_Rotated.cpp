 #include<bits/stdc++.h>
 using namespace std;
 // https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
 
 int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1,mid=l+(h-l)/2;
        
        while(l<h){
            if(nums[l]<nums[h]){
                return nums[l];
            }
            if(nums[0]<=nums[mid]){
                l=mid+1;
            }
            else{
                h=mid;
            }
            
            mid=l+(h-l)/2;
        }
        
        return nums[mid];
}

int main(){
	vector<int> nums{7,9,12,15,20,1,3,4};
	cout<<"Minimum Element in an Array :"<<findMin(nums)<<endl;
	return 0;
}
