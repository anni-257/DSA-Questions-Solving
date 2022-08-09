void merge(int arr[], int l, int m, int r)
    {
         int len1=m-l+1;
         int len2=r-m;
         
         int *arr1=new int[len1];
         int *arr2=new int[len2];
         
         int index=l;
         for(int i=0;i<len1;i++){
             arr1[i]=arr[index++];
         }
         for(int i=0;i<len2;i++){
             arr2[i]=arr[index++];
         }
         
         int i=0,j=0;
         index=l;
         
         while(i<len1 && j<len2){
             if(arr1[i]<arr2[j]){
                 arr[index++]=arr1[i++];
             }else{
                 arr[index++]=arr2[j++];
             }
         }
         
         while(i<len1){
             arr[index++]=arr1[i++];
         }
         while(j<len2){
             arr[index++]=arr2[j++];
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
