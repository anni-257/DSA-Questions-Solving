 
 // https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
 
 int remove_duplicate(int a[],int n){
        int pos=0;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                a[pos++]=a[i];
            }
        }
        a[pos++]=a[n-1];
        
        return pos;
    }
