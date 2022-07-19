 // https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&curated[]=8&sortBy=submissions
 
 int MissingNumber(vector<int>& array, int n) {
        int arrSum=0;
        int sum=(n*(n+1))/2;
        for(auto x:array){
            arrSum+=x;
        }
        
        return sum-arrSum;
    }
