#include<bits/stdc++.h>
using namespace std;

//https://www.google.com/url?q=https://leetcode.com/problems/maximum-subarray/&sa=D&source=editors&ust=1657645455963190&usg=AOvVaw03HKE4WGN6S3qWvEB-H2Tc

//53. Maximum Subarray
/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.*/

int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int currentSum=0;

        for(int i=0;i<nums.size();i++){
            currentSum+=nums[i];
            if(maxSum<currentSum){
                maxSum=currentSum;
            }
            if(currentSum<0){
                currentSum=0;
            }
        }

        return maxSum;
    }

int main(){
    vector<int> vec{-1,2,3,-4,13,6,-3,2,2};
    cout<<"Maximum Sub_Array Sum is: "<<maxSubArray(vec)<<endl;
    return 0;
}
