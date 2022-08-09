

// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&curated[]=1&sortBy=submissions

// arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int partition(int arr[],int l, int r){
        int pivot=arr[l];
        int cnt=0;
        for(int i=l+1;i<=r;i++){
            if(arr[i]<=arr[l]){
                cnt++;
            }
        }
        
        int Index=l+cnt;
        swap(arr[l],arr[Index]);
        
        int i=l,j=r;
        while(i<Index && j>Index){
            while(arr[i]<=arr[Index]){
                i++;
            }
            
            while(arr[j]>arr[Index]){
                j--;
            }
            
            if(i<Index && j>Index){
                swap(arr[i++],arr[j--]);
            }
        }
        
        return Index;
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        
        if(r>l){
            
            int pivot=partition(arr,l,r);
        
            if(pivot==(k-1)){
                return arr[pivot];
            }
            
            if(pivot<(k-1)){
                return kthSmallest(arr,pivot+1,r,k);
            }else{
               return kthSmallest(arr,l,pivot-1,k);
            }
        }
        
        
        return arr[l];
    }
