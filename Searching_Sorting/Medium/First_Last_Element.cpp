    #include<bits/stdc++.h>
    using namespace std;
    
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

    int firstOcc(vector<int>& nums,int target){
        int l=0,h=nums.size()-1,mid=l+(h-l)/2,ans=-1;
        
        // mid=(l+h)/2
        
        while(l<=h){
            if(nums[mid]==target){
                ans=mid;  // Store Index
                h=mid-1; // Move to left side 
              
            }
            else if(target>nums[mid]){ // if target is greater find in element in Right part of Array
                l=mid+1;
            }
            else{ // if target is lesser find in element in Left part of Array
                h=mid-1;
            }
            
            // it is sure that either l or h will update 
            // update mid 
            mid=l+(h-l)/2;
        }
        
        // return LeftMost index;
        return ans;
    }
    
      int lastOcc(vector<int>& nums,int target){
        int l=0,h=nums.size()-1,mid=l+(h-l)/2,ans=-1;
    
          //mid=(l+h)/2;
          
        while(l<=h){
            if(nums[mid]==target){
                ans=mid;  // Store Index
                l=mid+1; //// Move to right side
              
            }
            else if(target>nums[mid]){// if target is greater find in element in Right part of Array
                l=mid+1;
            }
            else{
                // if target is lesser find in element in Left part of Array
                h=mid-1;
            }
            // it is sure that either l or h will update 
            // update mid 
            mid=l+(h-l)/2;
        }
        // return RightMost index;
        return ans;
    }
    
    
vector<int> searchRange(vector<int>& nums, int target) {
     
    vector<int> arr(2);
    arr[0]=firstOcc(nums,target); // leftMost Index
    arr[1]=lastOcc(nums,target); // rightMost Index
    
    return arr;
    
}

int main(){
	vector<int> vec{1,2,3,4,4,4,4,4,4,4,5,6,7};
	vector<int> res=searchRange(vec,4);
	cout<<"LeftMost Occ. of 4 :"<<res[0]<<endl;
	cout<<"RightMost Occ. of 4 :"<<res[1]<<endl;
	
	// no. of occ = right-left+1; if element is not found return 0
	
	return 0; 
}
