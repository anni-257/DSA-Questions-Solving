

// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

long maximumSumSubarray(int K, vector<int> &arr , int N){
        
        int j=0,i=0;
        long maxi=INT_MIN,sum=0;;
        
        while(j<arr.size()){
            
            sum+=arr[j];
            
            if(j-i+1<K){
                j++;
            }else{
                maxi=max(maxi,sum);
                sum-=arr[i];
                i++;
                j++;
            }
        }
        
        return maxi;
    }
