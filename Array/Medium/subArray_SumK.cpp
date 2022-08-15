

// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&category[]=Arrays&sortBy=submissions

vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i=0, j=0;
        long long sum=0;
        vector<int>ans;
        
        while(j<n){
            sum+=arr[j];
            
            if(sum<s){
                j++;
            }
                
            else if (sum>s){
                while(sum>s && i<j){
                    sum-=arr[i++];
                }
                
                if(sum!=s){
                    j++;
                }
            }
            
            if(sum==s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            
            
            
        }
        
        ans.push_back(-1);
        return ans;
    }
