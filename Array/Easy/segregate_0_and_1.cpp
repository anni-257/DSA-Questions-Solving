 
 // https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
 
 void segregate0and1(int arr[], int n) {
        int i=0,j=n-1;
        while(i<j){
            while(arr[i]==0){
                i++;
            }
            while(arr[j]==1){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
    }
