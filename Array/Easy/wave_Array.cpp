// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1?page=1&curated[]=8&sortBy=submissions

void convertToWave(int n, vector<int>& arr){
        
        if(n%2==0){
            n=n-1;
        }
        else{
            n= n-2;
        }
        
        for(int i=0;i<n;i+=2){
            swap(arr[i],arr[i+1]);
        }   
        
        
    }
