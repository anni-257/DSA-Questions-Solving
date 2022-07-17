#include<bits/stdc++.h>
using namespace std;

// https://www.interviewbit.com/problems/allocate-books/

int isPossible(vector<int>&nums,int m, int mid){
    
    if(nums.size()<m)
        return -1;

    int pageSum=0;
    int stdSum=1;
    for(int i=0;i<nums.size();i++){
        if(pageSum+nums[i]<=mid){
            pageSum+=nums[i];
        }
        else{
            stdSum++;
            if(stdSum>m || nums[i]>mid){
                return false;
            }
            pageSum=nums[i];
        }
    }
    return true;
}

int allocateBooks(vector<int>& nums, int m){
    int ans=-1,l=0;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    int h=sum;
    int mid=l+(h-l)/2;

    while(l<=h){
        if(isPossible(nums,m,mid)){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }

        mid=l+(h-l)/2;
    }

    return ans;

}
int main(){
    vector<int> vec{10,20,30,40,60,100};
    cout<<"page Allocation is: "<<allocateBooks(vec,2)<<endl;
    return 0;
    
}
