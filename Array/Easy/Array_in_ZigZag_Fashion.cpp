
// https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1?page=1&curated[]=1&sortBy=submissions

// Program for zig-zag conversion of array
	// Observation Input:
	
/*
N = 7
Arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3 7 4 8 2 6 1
Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1
*/


void zigZag(int arr[], int n) {
	    for(int i=0;i<n-1;i++){
	        if(i%2==0){
	            if(arr[i]>arr[i+1]){
	                swap(arr[i],arr[i+1]);
	            }
	        }else{
	            if(arr[i]<arr[i+1]){
	                swap(arr[i],arr[i+1]);
	            }
	        }
	    }
	}
