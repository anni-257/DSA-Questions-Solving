 
 // https://practice.geeksforgeeks.org/problems/quick-sort/1?page=1&category[]=Sorting&category[]=Reverse&sortBy=submissions
 
 //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int si, int ei)
    {
        if(si>=ei){
        return;
    }

    int pivotIndex=partition(arr,si,ei);

    quickSort(arr,si,pivotIndex-1);
    quickSort(arr,pivotIndex+1,ei);

    }
    
    public:
    int partition (int arr[], int si, int ei)
    {
       int pivotEle=arr[si];
    int cnt=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotEle){
            cnt++;
        }
    }

    int pivotIndex=si+cnt;
    swap(arr[si],arr[pivotIndex]);

    int i=si,j=ei;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=arr[pivotIndex]){
            i++;
        }
        while(arr[j]>arr[pivotIndex]){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;
       
    }
