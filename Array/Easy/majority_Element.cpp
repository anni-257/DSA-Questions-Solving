#include<bits/stdc++.h>
using namespace std;

// https://www.interviewbit.com/problems/majority-element/

/*

	Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
You may assume that the array is non-empty and the majority element always exist in the array.

Example :

Input : [2, 1, 2]
Return  : 2 which occurs 2 times which is greater than 3/2.

*/

int majorityElement(const vector<int> &A) {
    
    map<int,int> mp;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
    }
    
    for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second>(A.size()/2)){
            return it->first;
        }
    }
    
    return -1;
    
}

int main(){
	vector<int> vec{1,1,1,1,1,1,2,2,3,4};
	cout<<"Majority Element is: "<<majorityElement(vec)<<endl;
	
	return 0;
}

