
// https://practice.geeksforgeeks.org/problems/common-elements5420/1?page=10&curated[]=1&sortBy=submissions

vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        int i=0,j=0;
        vector<int> ans;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]<v2[j]){
                i++;
            }else if(v2[j]<v1[i]){
                j++;
            }else{
                ans.push_back(v1[i++]);
                j++;
            }
        }
        
        return ans;
    }
