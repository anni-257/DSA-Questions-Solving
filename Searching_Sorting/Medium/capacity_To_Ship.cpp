 
 // https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 
 bool isPossible(vector<int>& weights,int days,int mid){
        int day=1;
        int weightSum=0;
        for(int i=0;i<weights.size();i++){
            if(weightSum+weights[i]<=mid){
                weightSum+=weights[i];
            }
            else{
                day++;
                if(day>days || weights[i]>mid){
                    return false;
                }
                
                weightSum=weights[i];
                
            }
        }
        
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int l=0,sum=0;
        sum=accumulate(weights.begin(),weights.end(),sum);
        int h=sum;
        int mid=l+(h-l)/2;
        int ans=-1;
        while(l<=h){
            if(isPossible(weights,days,mid)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            
            mid=l+(h-l)/2;
        }
        
        return ans;
    }
