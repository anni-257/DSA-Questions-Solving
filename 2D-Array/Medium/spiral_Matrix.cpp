
// https://leetcode.com/problems/spiral-matrix/


vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        
        int startRow=0;
        int endCol=col-1;
        int endRow=row-1;
        int startCol=0;
        
        int total=row*col;
        int cnt=0;
        
        while(cnt<total){
            
            // starting Row
            
            for(int i=startCol;cnt<total && i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
                cnt++;
            }
            startRow++;
            
            // ending Col
            
            for(int i=startRow;cnt<total && i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
                cnt++;
            }
            endCol--;
            
            // ending Row
            
            for(int i=endCol;i>=startCol && cnt<total;i--){
                ans.push_back(matrix[endRow][i]);
                cnt++;
            }
            endRow--;
            
            // starting Col
            
            for(int i=endRow;i>=startRow && cnt<total;i--){
                ans.push_back(matrix[i][startCol]);
                cnt++;
            }
            startCol++;
        }
        
        return ans;
    }
