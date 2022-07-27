
// https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/1?page=1&curated[]=1&sortBy=submissions

long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n);
        
        long long sum=0;
        
        for(int i=0;i<n;i++){
            sum+=a[i]*b[n-1-i];
        }
        
        return sum;
    }
