 
 // https://leetcode.com/problems/merge-sorted-array/
 
 // 1st Approach
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i = m - 1, j = n - 1, k = m + n - 1;
     while(i >= 0 and j >= 0) {
         if(nums1[i] < nums2[j]) {
             nums1[k--] = nums2[j--];
         } else {
             nums1[k--] = nums1[i--];
         }
     }
     while(j >= 0) {
         nums1[k--] = nums2[j--];
     }
 }
 
 // 2nd Approach
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int i,j,k;
        i=j=k=0;
        for(int x=0;x<m;x++){
            v.push_back(nums1[x]);
        }
        while(i<m && j<n){
            if(v[i]<nums2[j]){
                nums1[k++]=v[i++];
            }
            else{
                nums1[k++]=nums2[j++];
            }
        }
        
        for(;i<m;i++){
            nums1[k++]=v[i];
        }
        
        for(;j<n;j++){
            nums1[k++]=nums2[j];
        }
        
        
        
    }


// 3rd Approach
void insertionSort(vector<int>& nums1, int& m,int val){
        int j=m-1;
        while(j>=0 && nums1[j]>val){
            nums1[j+1]=nums1[j];
            j--;
        }
        
        nums1[j+1]=val;
        m++;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int size1=m;
        while(i<size1 && j<n){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                insertionSort(nums1,m,nums2[j]);
                j++;
            }
        }
        
        while(j<n){
            insertionSort(nums1,m,nums2[j]);
                j++;
        }
    }
  
