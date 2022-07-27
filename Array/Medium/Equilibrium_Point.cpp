
//  https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&curated[]=1&sortBy=submissions  


    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        long long rightSum=0,leftSum=0;
        long long mid=n/2;
        
        for(int i=0;i<mid;i++){
            leftSum+=arr[i];
        }
        for(int i=mid+1;i<n;i++){
            rightSum+=arr[i];
        }
        //we keep moving right until leftSum become equal or less than RightSum
        if(leftSum>rightSum){
            while(leftSum>rightSum && mid > 0 ){
                leftSum-=arr[mid-1];
                rightSum+=arr[mid];
                mid--;
            }
        }
        else{
            while(leftSum<rightSum && mid<n-1){
                rightSum-=arr[mid+1];
                leftSum+=arr[mid];
                mid++;
            }
        }
        
        if(rightSum==leftSum){
            return mid+1;
        }else{
            return -1;
        }
        
        return -1;
    }

