
// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&category[]=Arrays&curated[]=7&curated[]=8&sortBy=submissions

void rotate(int arr[], int n)
{
    int x=arr[n-1];
    
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    
    arr[0]=x;
}
