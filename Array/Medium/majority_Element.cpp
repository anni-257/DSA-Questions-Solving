
//  Moore's Voting Algorithm 
// https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

int majorityElement(int a[], int size)
    {
        
        int cnt=1;
        int element=a[0];
        
        for(int i=1;i<size;i++){
            
            if(element==a[i]){
                cnt++;
            }else{
                cnt--;
            }
            
            if(cnt==0){
                element=a[i];
                cnt++;
            }
        }
        
        int cnt2=0;
        for(int i=0;i<size;i++){
            if(element==a[i]){
                cnt2++;
            }
            
            if(cnt2>size/2){
                return element;
            }
        }
        
        return -1;
        
    }
