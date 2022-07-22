// https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1

bool isPossible(int arr[], int n, int k,long long mid){
        int  painter=1;
        long long boardSum=0;
        for(int i=0;i<n;i++){
            if(boardSum+arr[i]<=mid){
                boardSum+=arr[i];
            }
            else{
                painter++;
                if(painter>k || arr[i]>mid){
                    return false;
                }
                
                boardSum=arr[i];
            }
        }
        
        return true;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long  ans=-1;
        long long l=0,sum=0;
        sum=accumulate(arr,arr+n,sum);
        long long h=sum;
        long long mid=l+(h-l)/2;
        
        while(l<=h){
            if(isPossible(arr,n,k,mid)){
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
