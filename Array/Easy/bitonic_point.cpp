// https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=1&curated[]=8&sortBy=submissions

int findMaximum(int arr[], int n) {
	    int l=0,h=n-1,mid=l+(h-l)/2;
	    
	    while(l<h){
	       
	        if(arr[mid]<arr[mid+1]){
	            l=mid+1;
	        }
	        else{
	            h=mid;
	        }
	        
	        mid=l+(h-l)/2;
	    }
	    
	    return arr[mid];
	}
