

// https://practice.geeksforgeeks.org/problems/peak-element/1?page=1&category[]=Arrays&sortBy=submissions

int peakElement(int arr[], int n)
    {
       int l=0,h=n-1;
       int mid=l+(h-l)/2;
       
       while(l<h){
           if(arr[mid]<arr[mid+1]){
               l=mid+1;
           }else{
               h=mid;
           }
           
           mid=l+(h-l)/2;
       }
       return mid;
    }
