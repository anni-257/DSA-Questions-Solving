
// https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1?page=1&curated[]=1&sortBy=submissions

 //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int low,high;
        for(int i=0;i<n;i+=k){
            low=i;
            high=min(i+k-1,n-1); // choose minimum 
            
            while(low<high){
                swap(arr[low++],arr[high--]);
            }
        }
    }
