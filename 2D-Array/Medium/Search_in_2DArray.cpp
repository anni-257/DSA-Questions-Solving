

// https://leetcode.com/problems/search-a-2d-matrix/


bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        int l=0;
        int h=row*col-1;
        
        int mid=l+(h-l)/2;
        
        while(l<=h){
            int val=matrix[mid/col][mid%col];
            if(val==target){
                return true;
            }
            else if(val>target){
                h=mid-1;
            }else{
                l=mid+1;
            }
            
            mid=l+(h-l)/2;
        }
        
        return false;
        
    }
