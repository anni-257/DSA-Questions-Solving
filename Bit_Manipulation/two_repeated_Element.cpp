  
  // https://practice.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1
  
  //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        vector<int> ans;
        int Xor=0;int size=N+2;
        int set_Bit=0,x=0,y=0;
        for(int i=0;i<size;i++){
            Xor^=arr[i];
        }
        for(int i=1;i<=N;i++){
            Xor^=i;
        }
        
        set_Bit=Xor&~(Xor-1);
        
         for(int i=0;i<size;i++){
            if(arr[i]&set_Bit){
                x^=arr[i];
            }
            else{
                y^=arr[i];
            }
        }
        for(int i=1;i<=N;i++){
             if(i&set_Bit){
                x^=i;
            }
            else{
                y^=i;
            }
        }
        
        ans.push_back(x);
        ans.push_back(y);
        
        return ans;
        
        
        
    
    }
