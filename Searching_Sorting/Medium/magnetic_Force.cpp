 
 // https://leetcode.com/problems/magnetic-force-between-two-balls/
 
 bool isPossible(vector<int>& position, int m,int mid){
        int ballCount=1;
        int lastPos=position[0];
        for(int i=0;i<position.size();i++){
            if(position[i]-lastPos>=mid){
                ballCount++;
                if(ballCount==m){
                    return true;
                }
                
                lastPos=position[i];
            }
        }
        
        return false;
    }
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        
        int l=0,maxi=0,mid=0,h=0;
        
        h=*max_element(position.begin(),position.end());
        
        mid=l+(h-l)/2;
        
        int ans=-1;
        
        while(l<=h){
            if(isPossible(position,m,mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
            
            mid=l+(h-l)/2;
        }
        
        return ans;
        
    }
